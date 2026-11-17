/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$.ctor
void Dino_BusSand_Sdk_UnityIapProvider___ctor (Dino_BusSand_Sdk_UnityIapProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$.ctor
   void Dino_BusSand_Sdk_UnityIapProvider___ctor (Dino_BusSand_Sdk_UnityIapProvider_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider___ctor_243bbd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  puVar4 = PTR_DAT_04cbf508;
  puVar3 = PTR_DAT_04cbf500;
  puVar2 = PTR_DAT_04cbb310;
  puVar1 = PTR_DAT_04cbb308;
                    /* catch() { ... } // from try @ 0253bbc8 with catch @ 0253bbd8 */
                    /* try { // try from 0253bbdc to 0263bbe3 has its CatchHandler @ 0253bbec */
                    /* try { // try from 0253bbe4 to 0263bbef has its CatchHandler @ 0253b71c */
                    /* catch() { ... } // from try @ 0253bbdc with catch @ 0253bbec */
  if ((bRam0000000004f9cc89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf508);
    FUN_02132f7c(PTR_DAT_04cbb310);
    FUN_02132f7c(PTR_DAT_04cbf500);
    FUN_02132f7c(PTR_DAT_04cbb308);
    bRam0000000004f9cc89 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__float____ctor_34b6d9c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar5);
  System_Object___ctor_4870e5c(param_1,0);
  puVar1 = PTR_DAT_04cbf620;
  if ((bRam0000000004f9cc8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf620);
    bRam0000000004f9cc8a = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_4770b6c(&uStack_80,0);
  uStack_50 = uStack_78;
  uStack_58 = uStack_80;
  uStack_48 = uStack_70;
  thunk_FUN_02134474((ulong)&uStack_60 | 8,0);
  lStack_38 = param_1;
  thunk_FUN_02134474(&lStack_38,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_UnityIapProvider__InitAsync_d__10__26b55e0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return;
}

