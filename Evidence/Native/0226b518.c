/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass98_0$$<ChallengeWin>b__1
void Dino_BusSand_App_GameApp___c__DisplayClass98_0___ChallengeWin_b__1 (Dino_BusSand_App_GameApp___c__DisplayClass98_0_o* __this, UnityEngine_Vector3_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass98_0$$<ChallengeWin>b__1
   void Dino_BusSand_App_GameApp___c__DisplayClass98_0___ChallengeWin_b__1
   (Dino_BusSand_App_GameApp___c__DisplayClass98_0_o* __this, UnityEngine_Vector3_o __, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass98_0___ChallengeWin_b__1_216b518(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000004f9b8a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac8b0);
    bRam0000000004f9b8a4 = 1;
  }
  puVar1 = PTR_DAT_04cabb00;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar2,param_1,*(undefined8 *)PTR_DAT_04cac8b0,0);
    *(long *)(param_1 + 0x20) = lVar2;
    thunk_FUN_02134474((long *)(param_1 + 0x20),lVar2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  Dino_BusSand_App_UI_ScreenFade__Run_2289914(lVar2,&uStack_48,0);
  return;
}

