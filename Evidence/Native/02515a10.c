/* IL2CPP: Dino.BusSand.Core.Road$$TryBoardFootprint
bool Dino_BusSand_Core_Road__TryBoardFootprint (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, int32_t* minX, int32_t* maxX, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$TryBoardFootprint
   bool Dino_BusSand_Core_Road__TryBoardFootprint (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, int32_t* minX, int32_t* maxX, const MethodInfo* method); */

bool Dino_BusSand_Core_Road__TryBoardFootprint_2415a10
               (long param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((bRam0000000004f9cb6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cbe6c0);
    bRam0000000004f9cb6f = 1;
  }
  puVar2 = PTR_DAT_04cbe6c0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    dVar8 = *(double *)(param_2 + 0x40);
    lVar5 = *(long *)PTR_DAT_04cbe6c0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04caa200;
    lVar6 = (*(long **)(lVar5 + 0xb8))[1];
    if (lVar6 != 0) {
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 == 0) goto LAB_02515bd8;
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          dVar8 = dVar8 + *(double *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) *
                          (double)*(int *)(param_2 + 0x1c);
          dVar9 = *(double *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) *
                  (double)*(int *)(param_2 + 0x1c) * 0.5;
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          dVar7 = dVar8 - dVar9;
          dVar8 = dVar8 + dVar9;
          iVar4 = -0x80000000;
          if ((double)(long)dVar7 != INFINITY) {
            iVar4 = (int)dVar7;
          }
          *param_3 = iVar4 - *(int *)(param_1 + 0x1c);
          iVar4 = 0x7fffffff;
          if ((double)(long)dVar8 != INFINITY) {
            iVar4 = (int)dVar8 + -1;
          }
          iVar4 = iVar4 - *(int *)(param_1 + 0x1c);
          *param_4 = iVar4;
          if (iVar4 <= *param_3) {
            iVar4 = *param_3;
          }
          *param_4 = iVar4;
          if ((iVar4 < 0) || (iVar4 = *param_3, *(int *)(param_1 + 0x18) <= iVar4)) {
            bVar3 = false;
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar4 = System_Math__Max_4830fc8(iVar4,0,0);
            *param_3 = iVar4;
            iVar4 = System_Math__Min_4831118(*param_4,*(int *)(param_1 + 0x18) + -1,0);
            *param_4 = iVar4;
            bVar3 = *param_3 <= iVar4;
          }
          return bVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02515bd8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

