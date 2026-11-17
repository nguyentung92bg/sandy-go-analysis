/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass35_0$$<ShowRewarded>g__Show|1
void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Show_1 (Dino_BusSand_App_Ads___c__DisplayClass35_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass35_0$$<ShowRewarded>g__Show|1
   void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Show_1
   (Dino_BusSand_App_Ads___c__DisplayClass35_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Show_1_2177b8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04cad0d8;
  puVar2 = PTR_DAT_04cad0a8;
  puVar3 = PTR_DAT_04cabaa8;
  puVar1 = PTR_DAT_04caa458;
  if ((bRam0000000004f9b8ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cad0d8);
    FUN_02132f7c(PTR_DAT_04cad0a8);
    bRam0000000004f9b8ef = 1;
  }
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x18),0);
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02277c24 to 02377c2f has its CatchHandler @ 02277c60 */
                    /* try { // try from 02277c30 to 02377c7b has its CatchHandler @ 02277b28 */
  System_Action___ctor_47b5ed0(lVar9,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cacab8;
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cacab8);
    bRam0000000004f9b8e8 = 1;
  }
  puVar2 = PTR_DAT_04caba50;
  Dino_BusSand_App_DeviceMemory__Read_214fafc(&uStack_70,0);
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uVar5 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  Dino_BusSand_App_CrashContext__Memory_2172060(uVar5,&uStack_90);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  uVar5 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar7 & 1) == 0) {
    if (lVar9 == 0) goto LAB_02277a00;
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_02277a00:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_a8 = uStack_48;
    uStack_b0 = uStack_50;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    Dino_BusSand_App_GameApp__BeforeFullscreenAd_21650ac
              (**(long **)(lVar6 + 0xb8),uVar8,&uStack_b0,lVar9,0);
  }
  return;
}

