/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_6
bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_6
   bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_6_2345e78(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac850);
    FUN_02132f7c(PTR_DAT_04cb6f08);
    bRam0000000004f9c6da = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    lVar2 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar2,*(undefined8 *)PTR_DAT_04cac850);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar2,*(undefined8 *)PTR_DAT_04cb6f08,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0), lVar2 != 0)
       ) {
      if ((bRam0000000004fa8362 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0);
        bRam0000000004fa8362 = 1;
      }
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fa8440 == (code *)0x0) {
          pcRam0000000004fa8440 = (code *)FUN_02132f40(&UNK_00e58523);
        }
                    /* WARNING: Could not recover jumptable at 0x044c15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000004fa8440)(lVar5);
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

