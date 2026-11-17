/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_IsClearedBoard
bool Dino_BusSand_Core_StageEngine__get_IsClearedBoard (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_IsClearedBoard
   bool Dino_BusSand_Core_StageEngine__get_IsClearedBoard (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__get_IsClearedBoard_2424554(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  long lStack_30;
  
  if ((bRam0000000004f9cb9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc470);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc480);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc488);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cbc368);
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbc4a0);
    bRam0000000004f9cb9b = 1;
  }
  uStack_40 = 0;
  puStack_38 = (undefined8 *)0x0;
  lStack_30 = 0;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = Dino_BusSand_Core_TruckGrid__get_IsEmpty_2424904();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar2 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
      if (iVar2 != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_90,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
        puVar1 = PTR_DAT_04cbc308;
        puStack_38 = puStack_88;
        uStack_40 = uStack_90;
        lStack_30 = lStack_80;
        uStack_90 = 0;
        puStack_88 = &uStack_40;
        do {
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_40,*(undefined8 *)puVar1);
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_40,*(undefined8 *)PTR_DAT_04cbc300);
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_025247ec;
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_90,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbd060);
            puVar1 = PTR_DAT_04cbd050;
            puStack_58 = puStack_88;
            uStack_60 = uStack_90;
            lStack_50 = lStack_80;
            uStack_90 = 0;
            puStack_88 = &uStack_60;
            goto LAB_02524704;
          }
          if (lStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar2 = Dino_BusSand_Core_Garage__get_Remaining_2423ac0();
        } while (iVar2 < 1);
        puVar4 = &uStack_40;
        puVar5 = (undefined8 *)PTR_DAT_04cbc300;
        goto LAB_025247b0;
      }
    }
  }
LAB_025247ec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = Dino_BusSand_Core_Lift__get_Remaining_242e29c(lStack_50,0);
    if (0 < iVar2) break;
LAB_02524704:
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_60,*(undefined8 *)PTR_DAT_04cbd048);
      if (*(long *)(param_1 + 0x40) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_78,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
        puVar1 = PTR_DAT_04cbc480;
        uStack_90 = 0;
        puStack_88 = &uStack_78;
        do {
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_78,*(undefined8 *)puVar1);
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_78,*(undefined8 *)PTR_DAT_04cbc470);
            return 1;
          }
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar2 = Dino_BusSand_Core_Lane__get_Remaining_242ee54(lStack_68,0);
        } while (iVar2 < 1);
        puVar4 = &uStack_78;
        puVar5 = (undefined8 *)PTR_DAT_04cbc470;
        goto LAB_025247b0;
      }
      goto LAB_025247ec;
    }
  }
  puVar4 = &uStack_60;
  puVar5 = (undefined8 *)PTR_DAT_04cbd048;
LAB_025247b0:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594(puVar4,*puVar5);
  return 0;
}

