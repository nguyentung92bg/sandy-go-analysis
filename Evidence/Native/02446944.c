/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<HomeOffers>b__47_1
bool Dino_BusSand_Cheat_AutoQa___c___HomeOffers_b__47_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<HomeOffers>b__47_1
   bool Dino_BusSand_Cheat_AutoQa___c___HomeOffers_b__47_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___HomeOffers_b__47_1_2346944(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac850);
    FUN_02132f7c(PTR_DAT_04cb74f8);
    bRam0000000004f9c6ee = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 != 0) {
    lVar3 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar3,*(undefined8 *)PTR_DAT_04cac850);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar3,*(undefined8 *)PTR_DAT_04cb74f8,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if ((lVar3 == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 == 0))
      goto LAB_02446a48;
      uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar3,0);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 1;
    }
    return uVar2 & 1;
  }
LAB_02446a48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

