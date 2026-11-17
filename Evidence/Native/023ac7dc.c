/* IL2CPP: Dino.BusSand.App.UI.CommerceUi.<>c$$<.cctor>b__25_0
bool Dino_BusSand_App_UI_CommerceUi___c____cctor_b__25_0 (Dino_BusSand_App_UI_CommerceUi___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi.<>c$$<.cctor>b__25_0
   bool Dino_BusSand_App_UI_CommerceUi___c____cctor_b__25_0 (Dino_BusSand_App_UI_CommerceUi___c_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_CommerceUi___c____cctor_b__25_0_22ac7dc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c2b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    bRam0000000004f9c2b3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = UnityEngine_Application__get_internetReachability_4352df4(0);
  return iVar2 != 0;
}

