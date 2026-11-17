/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$RetryInit
void Dino_BusSand_Sdk_UnityIapProvider__RetryInit (Dino_BusSand_Sdk_UnityIapProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$RetryInit
   void Dino_BusSand_Sdk_UnityIapProvider__RetryInit (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__RetryInit_243e200(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    *(undefined2 *)(param_1 + 0x30) = 0;
    puVar1 = PTR_DAT_04cbf620;
    if ((bRam0000000004f9cc8a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbf620);
      bRam0000000004f9cc8a = 1;
    }
    alStack_38[1] = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    alStack_38[0] = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_4770b6c(&uStack_80,0);
    uStack_50 = uStack_78;
    uStack_58 = uStack_80;
    uStack_40 = uStack_68;
    uStack_48 = uStack_70;
    thunk_FUN_02134474((ulong)&uStack_60 | 8,0);
    alStack_38[0] = param_1;
    thunk_FUN_02134474(alStack_38,param_1);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_UnityIapProvider__InitAsync_d__10__26b55e0
              ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
    return;
  }
  return;
}

