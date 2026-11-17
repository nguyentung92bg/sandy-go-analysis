/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_3
bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_3 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_3
   bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_3 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_3_2344d60(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb97a0);
    FUN_02132f7c(PTR_DAT_04cb9798);
    bRam0000000004f9c6bd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar3,*(undefined8 *)PTR_DAT_04cb9798);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
    if (lVar3 != 0) {
      lVar6 = *(long *)PTR_DAT_04cb97a0;
      puVar7 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        puVar7 = *(undefined8 **)(lVar6 + 0x38);
        if (puVar7 == (undefined8 *)0x0) {
          FUN_0216b4cc(lVar6);
          puVar7 = *(undefined8 **)(lVar6 + 0x38);
        }
      }
      uVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar3,*puVar7);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar5,0);
      return (uVar2 ^ 0xffffffff) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

