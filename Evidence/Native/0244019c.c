/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StillGood
bool Dino_BusSand_Cheat_AutoPlayHand__StillGood (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StillGood
   bool Dino_BusSand_Cheat_AutoPlayHand__StillGood (Dino_BusSand_App_Gameplay_GameplayController_o*
   gc, int32_t id, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoPlayHand__StillGood_234019c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c67a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    bRam0000000004f9c67a = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_38 = 0;
  if (((param_1 == 0) ||
      (lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1,0),
      puVar3 = PTR_DAT_04cab9f8, puVar2 = PTR_DAT_04cab9e8, puVar1 = PTR_DAT_04cab9e0, lVar6 == 0))
     || (*(long *)(lVar6 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_38 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar6 + 0x28),0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_58,&uStack_38,*(undefined8 *)puVar3);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_58,*(undefined8 *)puVar2);
    lVar6 = lStack_48;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      goto LAB_024402b4;
    }
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(int *)(lStack_48 + 0x10) != param_2);
  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(*(long *)(lVar7 + 0x28),lVar6,0);
LAB_024402b4:
                    /* try { // try from 024402c0 to 02540443 has its CatchHandler @ 024402c0
                       catch() { ... } // from try @ 024402c0 with catch @ 024402c0
                       catch() { ... } // from try @ 024404b8 with catch @ 024402c0
                       catch() { ... } // from try @ 024405b8 with catch @ 024402c0
                       catch() { ... } // from try @ 024405e4 with catch @ 024402c0
                       catch() { ... } // from try @ 02440608 with catch @ 024402c0 */
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_58,*(undefined8 *)puVar1);
  return uVar4 & uVar5 & 1;
}

