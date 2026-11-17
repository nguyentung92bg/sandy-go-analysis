/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_2
System_String_o* Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_2 (Dino_BusSand_Sdk_SdkBootstrap___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_2
   System_String_o* Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_2
   (Dino_BusSand_Sdk_SdkBootstrap___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_2_243c7bc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = PTR_DAT_04caa408;
  if ((bRam0000000004f9cc7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf588);
    FUN_02132f7c(PTR_DAT_04caa408);
    FUN_02132f7c(PTR_DAT_04cb71b8);
    FUN_02132f7c(PTR_DAT_04cbf590);
    FUN_02132f7c(PTR_DAT_04cbf598);
    FUN_02132f7c(PTR_DAT_04cbf5a0);
    FUN_02132f7c(PTR_DAT_04cbf5a8);
    bRam0000000004f9cc7c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = MaxSdkAndroid__IsInitialized_3bc1520(0);
  if ((uVar3 & 1) == 0) {
    return *(undefined8 *)PTR_DAT_04cbf5a0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = MaxSdkAndroid__GetSdkConfiguration_3bc1620(0);
  if (lVar4 != 0) {
    uStack_28 = *(undefined4 *)(lVar4 + 0x24);
    uStack_38 = *(undefined8 *)PTR_DAT_04cbf588;
    uStack_30 = 0xffffffffffffffff;
    uVar5 = System_Enum__ToString_4863070(&uStack_38,0);
    lVar4 = MaxSdkBase__get_CmpService_3bc3338(0);
    if (lVar4 != 0) {
      uVar3 = MaxCmpService__get_HasSupportedCmp_3bc0a18(lVar4,0);
      puVar1 = (undefined8 *)PTR_DAT_04cbf598;
      if ((uVar3 & 1) == 0) {
        puVar1 = (undefined8 *)PTR_DAT_04cb71b8;
      }
      uVar5 = System_String__Concat_46d30e8
                        (*(undefined8 *)PTR_DAT_04cbf590,uVar5,*(undefined8 *)PTR_DAT_04cbf5a8,
                         *puVar1,0);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

