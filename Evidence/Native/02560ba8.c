/* IL2CPP: Dino.Tracking.ServerTrackingCore$$.ctor
void Dino_Tracking_ServerTrackingCore___ctor (Dino_Tracking_ServerTrackingCore_o* __this, int32_t batchMaxEvents, float batchIntervalSeconds, System_String_o* platform, System_String_o* appVersion, System_String_o* userId, System_String_o* appId, System_Func_long__o* utcNowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.Tracking.ServerTrackingCore$$.ctor
   void Dino_Tracking_ServerTrackingCore___ctor (Dino_Tracking_ServerTrackingCore_o* __this, int32_t
   batchMaxEvents, float batchIntervalSeconds, System_String_o* platform, System_String_o*
   appVersion, System_String_o* userId, System_String_o* appId, System_Func_long__o* utcNowMs, const
   MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore___ctor_2460ba8
               (undefined4 param_1,long param_2,undefined4 param_3,long param_4,long param_5,
               long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar3 = PTR_DAT_04cc0a10;
  puVar2 = PTR_DAT_04cc0a08;
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9ce23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2980);
    FUN_02132f7c(PTR_DAT_04cc0a10);
    FUN_02132f7c(PTR_DAT_04cc0a08);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cc0a18);
    FUN_02132f7c(PTR_DAT_04cc0a20);
    bRam0000000004f9ce23 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_ServerTrackingCore_PendingEvent____ctor_2a975ec
            (uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x40),uVar5);
  System_Object___ctor_4870e5c(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = System_Math__Max_4830fc8(1,param_3,0);
  *(undefined4 *)(param_2 + 0x10) = uVar4;
  uVar4 = System_Math__Max_4830ff4(_UNK_00e20754,param_1,0);
  *(undefined4 *)(param_2 + 0x14) = uVar4;
  if (param_4 == 0) {
    param_4 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  *(long *)(param_2 + 0x18) = param_4;
  thunk_FUN_02134474((long *)(param_2 + 0x18),param_4);
  if (param_5 == 0) {
    param_5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  *(long *)(param_2 + 0x20) = param_5;
  thunk_FUN_02134474((long *)(param_2 + 0x20),param_5);
  if (param_6 == 0) {
    param_6 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  *(long *)(param_2 + 0x28) = param_6;
  thunk_FUN_02134474((long *)(param_2 + 0x28),param_6);
  if (param_7 == 0) {
    param_7 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  *(long *)(param_2 + 0x30) = param_7;
  thunk_FUN_02134474((long *)(param_2 + 0x30),param_7);
  puVar1 = PTR_DAT_04cc0a20;
  if (param_8 == 0) {
    lVar6 = *(long *)PTR_DAT_04cc0a20;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    puVar8 = *(undefined8 **)(lVar6 + 0xb8);
    param_8 = puVar8[1];
    if (param_8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar8;
      param_8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2980);
      System_Func_long____ctor_379dcdc(param_8,uVar5,*(undefined8 *)PTR_DAT_04cc0a18,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar7 = param_8;
      thunk_FUN_02134474(plVar7,param_8);
    }
  }
  plVar7 = (long *)(param_2 + 0x38);
  *plVar7 = param_8;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar7 >> 0xc & 0x3f),
                 ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

