// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: monster_test

#include "monster_test_suffix.hpp"
#include "monster_test.grpc.fb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace MyGame {
namespace Example {

static const char* MonsterStorage_method_names[] = {
  "/MyGame.Example.MonsterStorage/Store",
  "/MyGame.Example.MonsterStorage/Retrieve",
  "/MyGame.Example.MonsterStorage/GetMaxHitPoint",
  "/MyGame.Example.MonsterStorage/GetMinMaxHitPoints",
};

std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& /*options*/) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}

MonsterStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_Store_(MonsterStorage_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retrieve_(MonsterStorage_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetMaxHitPoint_(MonsterStorage_method_names[2], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_GetMinMaxHitPoints_(MonsterStorage_method_names[3], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}
  
::grpc::Status MonsterStorage::Stub::Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Store_, context, request, response);
}

::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, true);
}

::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, false);
}

::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_Retrieve_, context, request);
}

::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, true, tag);
}

::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, false, nullptr);
}

::grpc::ClientWriter< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::GetMaxHitPointRaw(::grpc::ClientContext* context, flatbuffers::grpc::Message<Stat>* response) {
  return ::grpc::internal::ClientWriterFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_GetMaxHitPoint_, context, response);
}

::grpc::ClientAsyncWriter< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::AsyncGetMaxHitPointRaw(::grpc::ClientContext* context, flatbuffers::grpc::Message<Stat>* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_GetMaxHitPoint_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::PrepareAsyncGetMaxHitPointRaw(::grpc::ClientContext* context, flatbuffers::grpc::Message<Stat>* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_GetMaxHitPoint_, context, response, false, nullptr);
}

::grpc::ClientReaderWriter< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::GetMinMaxHitPointsRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), rpcmethod_GetMinMaxHitPoints_, context);
}

::grpc::ClientAsyncReaderWriter< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::AsyncGetMinMaxHitPointsRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_GetMinMaxHitPoints_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncGetMinMaxHitPointsRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_GetMinMaxHitPoints_, context, false, nullptr);
}

MonsterStorage::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::Store), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(
          std::mem_fn(&MonsterStorage::Service::Retrieve), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::GetMaxHitPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[3],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::GetMinMaxHitPoints), this)));
}

MonsterStorage::Service::~Service() {
}

::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* /*context*/, const flatbuffers::grpc::Message<Monster>* /*request*/, flatbuffers::grpc::Message<Stat>* /*response*/) {
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MonsterStorage::Service::Retrieve(::grpc::ServerContext* /*context*/, const flatbuffers::grpc::Message<Stat>* /*request*/, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* /*writer*/) {
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MonsterStorage::Service::GetMaxHitPoint(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< flatbuffers::grpc::Message<Monster>>* /*reader*/, flatbuffers::grpc::Message<Stat>* /*response*/) {
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MonsterStorage::Service::GetMinMaxHitPoints(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>* /*stream*/) {
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace MyGame
}  // namespace Example

