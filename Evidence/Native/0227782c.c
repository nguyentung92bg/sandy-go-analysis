/* IL2CPP: Dino.BusSand.App.Ads$$OpenFullscreenAd
void Dino_BusSand_App_Ads__OpenFullscreenAd (System_String_o* what, System_Action_o* show, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$OpenFullscreenAd
   void Dino_BusSand_App_Ads__OpenFullscreenAd (System_String_o* what, System_Action_o* show, const
   MethodInfo* method); */

void Dino_BusSand_App_Ads__OpenFullscreenAd_217782c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04cacab8;
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* try { // try from 02277870 to 0237787b has its CatchHandler @ 022778ac */
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0227787c to 023778c7 has its CatchHandler @ 022777fc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cacab8);
    bRam0000000004f9b8e8 = 1;
  }
  puVar2 = PTR_DAT_04caba50;
  Dino_BusSand_App_DeviceMemory__Read_214fafc(&uStack_70,0);
                    /* catch() { ... } // from try @ 02277870 with catch @ 022778ac */
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uVar4 = System_String__Concat_46c82e0(param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 022778e8 to 023779e3 has its CatchHandler @ 022778e8
                       catch() { ... } // from try @ 022778e8 with catch @ 022778e8
                       catch() { ... } // from try @ 022779f0 with catch @ 022778e8 */
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  Dino_BusSand_App_CrashContext__Memory_2172060(uVar4,&uStack_90);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  uVar4 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar6 & 1) == 0) {
    if (param_2 == 0) goto LAB_02277a00;
                    /* try { // try from 022779e4 to 023779ef has its CatchHandler @ 02277a20 */
    (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_02277a00:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_a8 = uStack_48;
    uStack_b0 = uStack_50;
    uStack_98 = uStack_38;
    uStack_a0 = uStack_40;
    Dino_BusSand_App_GameApp__BeforeFullscreenAd_21650ac
              (**(long **)(lVar5 + 0xb8),param_1,&uStack_b0,param_2,0);
  }
                    /* try { // try from 022779f0 to 02377a3b has its CatchHandler @ 022778e8 */
  return;
}

