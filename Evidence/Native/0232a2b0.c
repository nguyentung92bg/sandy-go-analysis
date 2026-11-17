/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$RisePointsBetween
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_ClimbTowerFeature__RisePointsBetween (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t from, int32_t to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$RisePointsBetween
   System_Collections_Generic_List_int__o*
   Dino_BusSand_App_Meta_ClimbTowerFeature__RisePointsBetween
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t from, int32_t to, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_ClimbTowerFeature__RisePointsBetween_222a2b0
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9be25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9be25 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar5,*(undefined8 *)puVar4);
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
  puVar3 = PTR_DAT_04caa160;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(lVar9 + 0x20 + uVar10 * 4);
        if (((param_2 < iVar1) && (iVar1 <= param_3)) &&
           (uVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__RisePlayed_2229bd4(param_1,iVar1),
           (uVar6 & 1) == 0)) {
          if (lVar5 == 0) goto LAB_0232a410;
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0232a410;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(int *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar5,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
          }
        }
        uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return lVar5;
  }
LAB_0232a410:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

