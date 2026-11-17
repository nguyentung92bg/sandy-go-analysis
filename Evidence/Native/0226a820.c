/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass102_0$$<RunPostWin>b__0
void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__0 (Dino_BusSand_App_GameApp___c__DisplayClass102_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass102_0$$<RunPostWin>b__0
   void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__0
   (Dino_BusSand_App_GameApp___c__DisplayClass102_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__0_216a820(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000004f9b89b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac880);
    bRam0000000004f9b89b = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_40 = 0;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar5,param_1,*(undefined8 *)PTR_DAT_04cac880,0);
    *(long *)(param_1 + 0x20) = lVar5;
    thunk_FUN_02134474((long *)(param_1 + 0x20),lVar5);
  }
  puVar3 = PTR_DAT_04cac878;
  puVar2 = PTR_DAT_04cac6c0;
  puVar1 = PTR_DAT_04cabb00;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    lVar4 = *(long *)PTR_DAT_04cac6c0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),
               *(undefined4 *)(lVar4 + 0x10),&uStack_68,*(undefined8 *)puVar3);
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
  Dino_BusSand_App_UI_ScreenFade__Run_2289914(lVar5,&uStack_80,0);
  return;
}

