/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<Play>b__25_0
void Dino_BusSand_App_UI_HomePanel___Play_b__25_0 (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<Play>b__25_0
   void Dino_BusSand_App_UI_HomePanel___Play_b__25_0 (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel___Play_b__25_0_22edcc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar3 = PTR_DAT_04cb7698;
  puVar2 = PTR_DAT_04caa458;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c453 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cb7698);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    bRam0000000004f9c453 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action___ctor_47b5ed0(uVar4,param_1,*(undefined8 *)puVar3,0);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabb00;
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  puVar3 = PTR_DAT_04cac878;
  puVar2 = PTR_DAT_04cac6c0;
  if ((uVar5 & 1) == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_04cac6c0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*(undefined4 *)(lVar6 + 4),*(undefined4 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0xc),
               *(undefined4 *)(lVar6 + 0x10),&uStack_68,*(undefined8 *)puVar3);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_70 = uStack_40;
  Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar4,&uStack_80,0);
  return;
}

