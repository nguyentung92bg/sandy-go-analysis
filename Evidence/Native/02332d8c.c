/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$ToUnix
int64_t Dino_BusSand_App_Meta_GiftPackCycle__ToUnix (System_DateTime_o utc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$ToUnix
   int64_t Dino_BusSand_App_Meta_GiftPackCycle__ToUnix (System_DateTime_o utc, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04caa468;
  if ((bRam0000000004f9be86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be86 = 1;
  }
  puVar2 = PTR_DAT_04cacfd0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = System_DateTime__SpecifyKind_4810d5c(param_1,1,0);
  uStack_40 = 0;
  uStack_38 = 0;
  System_DateTimeOffset___ctor_4813fc8(&uStack_40,uVar3,0);
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  System_DateTimeOffset__ToUnixTimeSeconds_48160f8(&uStack_30,0);
  return;
}

