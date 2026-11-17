/* IL2CPP: Dino.BusSand.View.GameView$$CollectHighlights
void Dino_BusSand_View_GameView__CollectHighlights (Dino_BusSand_View_GameView_o* __this, System_String_o* mechanic, System_Collections_Generic_List_Transform__o* into, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$CollectHighlights
   void Dino_BusSand_View_GameView__CollectHighlights (Dino_BusSand_View_GameView_o* __this,
   System_String_o* mechanic, System_Collections_Generic_List_Transform__o* into, const MethodInfo*
   method); */

void Dino_BusSand_View_GameView__CollectHighlights_23a8abc
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_04cb18d0;
  if ((bRam0000000004f9c92d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc628);
    FUN_02132f7c(PTR_DAT_04cbc630);
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc638);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc640);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cbc368);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc648);
    FUN_02132f7c(PTR_DAT_04cb18d0);
    bRam0000000004f9c92d = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  lStack_88 = 0;
  uVar5 = System_String__op_Equality_46d1108(param_2,*(undefined8 *)puVar2,0);
  if ((uVar5 & 1) == 0) {
LAB_024a8de0:
    if (*(long *)(param_1 + 200) != 0) {
      Dino_BusSand_View_MechanicLayer__CollectHighlights_23d1e50
                (*(long *)(param_1 + 200),param_2,param_3,0);
    }
    return;
  }
  if ((*(long *)(param_1 + 0xf0) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_04cbc628), lVar6 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_a0,lVar6,*(undefined8 *)PTR_DAT_04cbc648);
    puVar4 = PTR_DAT_04cbc638;
    puVar3 = PTR_DAT_04cad6c0;
    puVar2 = PTR_DAT_04ca9ae8;
    puStack_58 = puStack_98;
    uStack_60 = uStack_a0;
    puStack_98 = &uStack_60;
    lStack_50 = lStack_90;
    uStack_a0 = 0;
LAB_024a8c1c:
    uVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                      (&uStack_60,*(undefined8 *)puVar4);
    lVar6 = lStack_50;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
        if (param_3 != 0) {
          lVar6 = *(long *)(param_3 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(param_3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(param_3 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (param_3,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_024a8c1c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_024a8c1c;
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_60,*(undefined8 *)PTR_DAT_04cbc630);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar6 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a0,lVar6,*(undefined8 *)PTR_DAT_04cbc368);
      puVar4 = PTR_DAT_04cbc4b8;
      puVar2 = PTR_DAT_04cbc308;
      puStack_78 = puStack_98;
      uStack_80 = uStack_a0;
      lStack_70 = lStack_90;
      uStack_a0 = 0;
      puStack_98 = &uStack_80;
LAB_024a8d24:
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar2);
      if ((uVar5 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (-1 < *(int *)(lStack_70 + 0x38)) {
          if (*(long *)(param_1 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                            (*(long *)(param_1 + 0xe0),*(int *)(lStack_70 + 0x38),&lStack_88,
                             *(undefined8 *)puVar4);
          if ((uVar5 & 1) != 0) {
            if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar7 = UnityEngine_Component__get_transform_43bcd18(lStack_88,0);
            if (param_3 != 0) {
              lVar6 = *(long *)(param_3 + 0x10);
              lVar8 = *(long *)puVar3;
              *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(param_3 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(param_3 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (param_3,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_024a8d24;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        goto LAB_024a8d24;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cbc300);
      goto LAB_024a8de0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

