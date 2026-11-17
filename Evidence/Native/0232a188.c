/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaimCount
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t diff, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaimCount
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t diff, const MethodInfo* method); */

int Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount_222a188(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  if ((bRam0000000004f9be24 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be24 = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasConfig_2229308(param_1);
  puVar3 = PTR_DAT_04caf910;
  puVar2 = PTR_DAT_04cad860;
  if ((uVar5 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar9 == 0) {
LAB_0232a2a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      iVar8 = 0;
      uVar5 = 0;
      uVar7 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(lVar9 + 0x20 + uVar5 * 4);
        lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar3);
        if (lVar6 == 0) goto LAB_0232a2a8;
        if (iVar1 <= *(int *)(lVar6 + 0x18) + param_2) {
          lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar3);
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x38) == 0)) goto LAB_0232a2a8;
          uVar4 = System_Collections_Generic_List_int___Contains_3a2c3ec
                            (*(long *)(lVar6 + 0x38),iVar1,*(undefined8 *)puVar2);
          iVar8 = iVar8 + ((uVar4 ^ 0xffffffff) & 1);
        }
        uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar5) {
          return iVar8;
        }
      } while( true );
    }
  }
  return 0;
}

