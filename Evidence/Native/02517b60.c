/* IL2CPP: Dino.BusSand.Core.SandGrid$$CountOf
int32_t Dino_BusSand_Core_SandGrid__CountOf (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color, int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$CountOf
   int32_t Dino_BusSand_Core_SandGrid__CountOf (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color,
   int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, const MethodInfo* method); */

int Dino_BusSand_Core_SandGrid__CountOf_2417b60
              (long param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  if ((bRam0000000004f9cb7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb7a = 1;
  }
  if (param_2 == '\0') {
    iVar6 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = System_Math__Max_4830fc8(0,param_3,0);
    iVar3 = System_Math__Max_4830fc8(0,param_5,0);
    iVar4 = System_Math__Min_4831118(*(int *)(param_1 + 0x10) + -1,param_4,0);
    iVar5 = System_Math__Min_4831118(*(int *)(param_1 + 0x14) + -1,param_6,0);
    iVar6 = 0;
    if (iVar3 <= iVar5) {
      iVar6 = 0;
      do {
        if (iVar2 <= iVar4) {
          lVar7 = *(long *)(param_1 + 0x38);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar8 = iVar2;
          do {
            uVar1 = *(int *)(param_1 + 0x10) * iVar3 + iVar8;
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            iVar8 = iVar8 + 1;
            if (*(char *)(lVar7 + (int)uVar1 + 0x20) == param_2) {
              iVar6 = iVar6 + 1;
            }
          } while (iVar8 <= iVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar5);
    }
  }
  return iVar6;
}

