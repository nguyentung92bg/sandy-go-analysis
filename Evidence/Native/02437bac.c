/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$FloorY
float Dino_BusSand_App_UI_WinStreakPanel__FloorY (float floor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$FloorY
   float Dino_BusSand_App_UI_WinStreakPanel__FloorY (float floor, const MethodInfo* method); */

float Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac(float param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c643 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04cb5430);
    bRam0000000004f9c643 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c(0);
  puVar2 = PTR_DAT_04cb5430;
  fVar7 = _UNK_00e1fe34;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      fVar9 = 760.0;
    }
    else {
      fVar10 = 0.0;
      iVar5 = 0;
      fVar11 = 760.0;
      do {
        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar3,iVar5,*(undefined8 *)puVar2);
        if (lVar4 == 0) goto LAB_02437d00;
        iVar1 = iVar5 + 1;
        iVar8 = *(int *)(lVar4 + 0x14);
        fVar9 = (float)iVar1 * fVar7 + 760.0;
        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar3,iVar5,*(undefined8 *)puVar2);
        if (param_1 <= (float)iVar8) {
          if (lVar4 != 0) {
            fVar6 = (float)*(int *)(lVar4 + 0x14) - fVar10;
            fVar7 = 1.0;
            if (1.0 <= fVar6) {
              fVar7 = fVar6;
            }
            return fVar11 + (fVar9 - fVar11) * ((param_1 - fVar10) / fVar7);
          }
          goto LAB_02437d00;
        }
        if (lVar4 == 0) goto LAB_02437d00;
        fVar10 = (float)*(int *)(lVar4 + 0x14);
        iVar5 = iVar1;
        fVar11 = fVar9;
      } while (iVar1 < *(int *)(lVar3 + 0x18));
    }
    return fVar9;
  }
LAB_02437d00:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

