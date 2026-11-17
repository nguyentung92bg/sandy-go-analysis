/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$FindOuterComma
int32_t Dino_BusSand_App_Meta_RacingRobotParser__FindOuterComma (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$FindOuterComma
   int32_t Dino_BusSand_App_Meta_RacingRobotParser__FindOuterComma (System_String_o* s, const
   MethodInfo* method); */

int Dino_BusSand_App_Meta_RacingRobotParser__FindOuterComma_225e520(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      uVar1 = System_String__get_Chars_46ccb24(param_1,iVar2,0);
      if (uVar1 < 0x2c) {
        if (uVar1 == 0x28) {
LAB_0235e594:
          iVar3 = iVar3 + 1;
        }
        else if (uVar1 == 0x29) goto LAB_0235e58c;
      }
      else if (uVar1 == 0x2c) {
        if (iVar3 == 0) {
          return iVar2;
        }
      }
      else if (uVar1 == 0x5d) {
LAB_0235e58c:
        iVar3 = iVar3 + -1;
      }
      else if (uVar1 == 0x5b) goto LAB_0235e594;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return -1;
}

