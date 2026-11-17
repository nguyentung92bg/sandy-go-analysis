/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Boosters>b__38_3
bool Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_3 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Boosters>b__38_3
   bool Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_3 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_3_2345224(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c6c6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto LAB_024452f4;
      uVar2 = Dino_BusSand_App_UI_HudPanel__CanPressItem_230d664(*(long *)(lVar3 + 0x48),0x2715,0);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2 & 1;
  }
LAB_024452f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

