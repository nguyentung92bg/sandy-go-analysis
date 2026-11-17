/* IL2CPP: Dino.BusSand.View.GameView$$CollectParked
void Dino_BusSand_View_GameView__CollectParked (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$CollectParked
   void Dino_BusSand_View_GameView__CollectParked (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__CollectParked_239fb7c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9c914 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc3e0);
    FUN_02132f7c(PTR_DAT_04cbc3e8);
    FUN_02132f7c(PTR_DAT_04cbc400);
    FUN_02132f7c(PTR_DAT_04cbc408);
    FUN_02132f7c(PTR_DAT_04cb68f8);
    FUN_02132f7c(PTR_DAT_04cb68d8);
    FUN_02132f7c(PTR_DAT_04cbc430);
    bRam0000000004f9c914 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x188);
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
    }
    if ((*(long *)(param_1 + 0xe0) != 0) &&
       (lVar8 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                          (*(long *)(param_1 + 0xe0),*(undefined8 *)PTR_DAT_04cbc3e0),
       puVar5 = PTR_DAT_04cbc400, puVar4 = PTR_DAT_04cbc3e8, puVar3 = PTR_DAT_04cb68f8, lVar8 != 0))
    {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                (&uStack_68,lVar8,*(undefined8 *)PTR_DAT_04cbc430);
      lStack_40 = lStack_58;
      uStack_48 = puStack_60;
      uStack_50 = uStack_68;
      uStack_68 = 0;
      puStack_60 = &uStack_50;
      while( true ) {
        do {
          do {
            uVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                              (&uStack_50,*(undefined8 *)puVar5);
            lVar8 = lStack_40;
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                        (&uStack_50,*(undefined8 *)puVar4);
              return;
            }
            if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          } while (*(int *)(lStack_40 + 0x2c) != 0);
          lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lStack_40,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
        } while ((uVar6 & 1) == 0);
        lVar7 = *(long *)(param_1 + 0x188);
        if (lVar7 == 0) break;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = lVar8;
          thunk_FUN_02134474(plVar10,lVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
          ;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

