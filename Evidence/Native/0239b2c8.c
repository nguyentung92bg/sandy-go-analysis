/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_CarsRoad
int32_t Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_CarsRoad
   int32_t Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad_229b2c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  if (lVar3 == 0) {
    return -1;
  }
  lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    if ((bRam0000000004f9cb55 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb1890,0);
      FUN_02132f7c(PTR_DAT_04cb1898);
      FUN_02132f7c(PTR_DAT_04cb18a0);
      FUN_02132f7c(PTR_DAT_04cbe5f0);
      bRam0000000004f9cb55 = 1;
    }
    puVar2 = PTR_DAT_04cb1898;
    puVar1 = PTR_DAT_04cb1890;
    lVar3 = *(long *)(lVar3 + 0x50);
    uStack_48 = 0;
    uStack_40 = 0;
    lStack_38 = 0;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04cbe5f0);
    iVar5 = 0;
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return iVar5;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x28) < 2) {
        iVar5 = iVar5 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

