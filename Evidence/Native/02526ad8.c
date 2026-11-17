/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_RoadEffectivelyFull
bool Dino_BusSand_Core_StageEngine__get_RoadEffectivelyFull (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_RoadEffectivelyFull
   bool Dino_BusSand_Core_StageEngine__get_RoadEffectivelyFull (Dino_BusSand_Core_StageEngine_o*
   __this, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__get_RoadEffectivelyFull_2426ad8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9cbc2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb1880);
    bRam0000000004f9cbc2 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = Dino_BusSand_Core_Road__get_IsFull_24121b8(*(long *)(param_1 + 0x20),0);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x20) + 0xb0) != '\0') {
        return 1;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uStack_58 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_70,&uStack_58,*(undefined8 *)PTR_DAT_04cab9f8);
        puVar1 = PTR_DAT_04cab9e8;
        uVar6 = 0;
        uStack_48 = puStack_68;
        uStack_50 = uStack_70;
        lStack_40 = lStack_60;
        uStack_70 = 0;
        puStack_68 = &uStack_50;
        do {
          do {
            uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_50,*(undefined8 *)puVar1);
            lVar5 = lStack_40;
            if ((uVar2 & 1) == 0) goto LAB_02526c68;
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar4 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_40)
            ;
          } while ((uVar4 & 1) == 0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar5 + 0x44) != '\0') || (*(int *)(lVar5 + 0x40) < 1)) {
            uVar6 = 1;
            break;
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar3 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar5 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(*(long *)(param_1 + 0x28),lVar5);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar6 = 1;
        } while (*(int *)(*(long *)(param_1 + 0x20) + 0x38) < *(int *)(lVar5 + 0x18) + iVar3);
LAB_02526c68:
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)PTR_DAT_04cab9e0);
        return uVar6 & (uVar2 ^ 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

