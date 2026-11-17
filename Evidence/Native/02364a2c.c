/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$StageMatches
bool Dino_BusSand_App_Meta_RacingRobotLineup__StageMatches (System_String_o* csv, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$StageMatches
   bool Dino_BusSand_App_Meta_RacingRobotLineup__StageMatches (System_String_o* csv, int32_t stage,
   const MethodInfo* method); */

byte Dino_BusSand_App_Meta_RacingRobotLineup__StageMatches_2264a2c(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iStack_24;
  
  iStack_24 = 0;
  uVar3 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar3 & 1) == 0) {
    if ((param_1 == 0) || (lVar4 = System_String__Split_46d50c0(param_1,0x2c,0,0), lVar4 == 0)) {
LAB_02364aec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar5 = *(long *)(lVar4 + 0x20 + lVar7 * 8);
        if (lVar5 == 0) goto LAB_02364aec;
        uVar6 = System_String__Trim_46d6ee0(lVar5,0);
        bVar2 = System_Int32__TryParse_482de64(uVar6,&iStack_24,0);
        bVar2 = bVar2 & iStack_24 == param_2;
        if (bVar2 != 0) {
          return bVar2;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return 0;
}

