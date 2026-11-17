/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c__DisplayClass25_0$$<ShowRewardedAsync>b__0
System_ValueTuple_bool__string__o Dino_BusSand_Sdk_DinoAdProvider___c__DisplayClass25_0___ShowRewardedAsync_b__0 (Dino_BusSand_Sdk_DinoAdProvider___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c__DisplayClass25_0$$<ShowRewardedAsync>b__0
   System_ValueTuple_bool__string__o
   Dino_BusSand_Sdk_DinoAdProvider___c__DisplayClass25_0___ShowRewardedAsync_b__0
   (Dino_BusSand_Sdk_DinoAdProvider___c__DisplayClass25_0_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Sdk_DinoAdProvider___c__DisplayClass25_0___ShowRewardedAsync_b__0_2431b70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar10 = PTR_DAT_04cbf068;
  puVar9 = PTR_DAT_04cbf060;
  puVar2 = (undefined8 *)PTR_DAT_04cbf058;
  puVar8 = PTR_DAT_04cbeff0;
  puVar7 = PTR_DAT_04cac890;
  puVar1 = (undefined8 *)PTR_DAT_04cabb28;
  if ((bRam0000000004f9cc2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cbf068);
    FUN_02132f7c(PTR_DAT_04cbf060);
    FUN_02132f7c(PTR_DAT_04cabb28);
    FUN_02132f7c(PTR_DAT_04cbf058);
    FUN_02132f7c(PTR_DAT_04cac890);
    bRam0000000004f9cc2c = 1;
  }
  iVar3 = **(int **)(*(long *)puVar8 + 0xb8);
  thunk_FUN_02142dc8();
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
  thunk_FUN_02142dc8();
  bVar11 = iVar3 != iVar4;
  if (!bVar11) {
    puVar1 = (undefined8 *)puVar7;
  }
  if (iVar5 != *(int *)(param_1 + 0x14)) {
    puVar2 = (undefined8 *)puVar9;
  }
  uVar12 = System_String__Concat_46c82e0(*puVar1,*puVar2,0);
  uStack_60 = 0;
  uStack_58 = 0;
  System_ValueTuple_bool__object____ctor_30d4a68(&uStack_60,bVar11,uVar12,*(undefined8 *)puVar10);
  auVar6._8_8_ = uStack_58;
  auVar6._0_8_ = uStack_60;
  return auVar6;
}

