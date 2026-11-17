/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$<RollbackStackedAgents>b__58_0
int32_t Dino_BusSand_App_Meta_RacingRobotSession___RollbackStackedAgents_b__58_0 (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$<RollbackStackedAgents>b__58_0
   int32_t Dino_BusSand_App_Meta_RacingRobotSession___RollbackStackedAgents_b__58_0
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t a, int32_t b, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession___RollbackStackedAgents_b__58_0_22647fc
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c04d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4488);
    bRam0000000004f9c04d = 1;
  }
  puVar1 = PTR_DAT_04cb4488;
  uStack_24 = 0;
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                         (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_04cb4488),
      lVar3 != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
    uStack_24 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x14);
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                           (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)puVar1), lVar3 != 0))
       && (*(long *)(lVar3 + 0x10) != 0)) {
      iVar2 = System_Int32__CompareTo_482d6dc
                        (&uStack_24,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x14),0);
      if (iVar2 != 0) {
        return;
      }
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)puVar1), lVar3 != 0))
         && (*(long *)(lVar3 + 0x10) != 0)) {
        uStack_24 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x10);
        if (((*(long *)(param_1 + 0x28) != 0) &&
            (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)puVar1), lVar3 != 0
            )) && (*(long *)(lVar3 + 0x10) != 0)) {
          System_Int32__CompareTo_482d6dc
                    (&uStack_24,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x10),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

