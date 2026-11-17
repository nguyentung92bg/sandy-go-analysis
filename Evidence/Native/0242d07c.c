/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$OnOpen
void Dino_BusSand_App_UI_WelcomeBackPanel__OnOpen (Dino_BusSand_App_UI_WelcomeBackPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$OnOpen
   void Dino_BusSand_App_UI_WelcomeBackPanel__OnOpen (Dino_BusSand_App_UI_WelcomeBackPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_WelcomeBackPanel__OnOpen_232d07c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04cb8f80;
  puVar1 = PTR_DAT_04cac7b0;
  if ((bRam0000000004f9c614 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04cb8f80);
    bRam0000000004f9c614 = 1;
  }
  Dino_BusSand_App_UI_RewardStagePanel__OnOpen_232d110(param_1,param_2);
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_Vector3____ctor_35f2828(uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = uVar3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

