/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass35_0$$<Win>b__6
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass35_0___Win_b__6 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass35_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass35_0$$<Win>b__6
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass35_0___Win_b__6
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass35_0_o* __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass35_0___Win_b__6_2346bc8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c6f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c6f1 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x10),0),
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
      return *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x20) < lVar3;
    }
  }
  return true;
}

