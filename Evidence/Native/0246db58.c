/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_2$$<OnOpen>b__38
bool Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_2___OnOpen_b__38 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_2$$<OnOpen>b__38
   bool Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_2___OnOpen_b__38
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_2_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_2___OnOpen_b__38_236db58(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = Dino_BusSand_Cheat_CheatMobilePanel__get_C_2368914(0);
  if (lVar1 != 0) {
    fVar2 = (float)Dino_BusSand_Cheat_CheatManager__get_SpeedValue_2365268(lVar1,0);
    fVar6 = *(float *)(param_1 + 0x10);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    fVar4 = ABS(fVar6);
    fVar3 = ABS(fVar2);
    if (ABS(fVar2) <= fVar4) {
      fVar3 = fVar4;
    }
    fVar5 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
    fVar4 = fVar3 * _UNK_00e20900;
    if (fVar3 * _UNK_00e20900 <= fVar5) {
      fVar4 = fVar5;
    }
    return ABS(fVar6 - fVar2) < fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

