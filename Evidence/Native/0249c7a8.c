/* IL2CPP: Dino.BusSand.View.GameView$$Clear
void Dino_BusSand_View_GameView__Clear (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$Clear
   void Dino_BusSand_View_GameView__Clear (Dino_BusSand_View_GameView_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_GameView__Clear_239c7a8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c90b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc3a8);
    FUN_02132f7c(PTR_DAT_04cbc3b0);
    FUN_02132f7c(PTR_DAT_04cbc3b8);
    FUN_02132f7c(PTR_DAT_04cbc3c0);
    FUN_02132f7c(PTR_DAT_04cbc3c8);
    FUN_02132f7c(PTR_DAT_04cbc3d0);
    FUN_02132f7c(PTR_DAT_04cbc3d8);
    FUN_02132f7c(PTR_DAT_04cbc3e0);
    FUN_02132f7c(PTR_DAT_04cbc3e8);
    FUN_02132f7c(PTR_DAT_04cbc3f0);
    FUN_02132f7c(PTR_DAT_04cbc3f8);
    FUN_02132f7c(PTR_DAT_04cbc400);
    FUN_02132f7c(PTR_DAT_04cbc408);
    FUN_02132f7c(PTR_DAT_04cbc410);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbc418);
    FUN_02132f7c(PTR_DAT_04cbc420);
    FUN_02132f7c(PTR_DAT_04cbc428);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc430);
    bRam0000000004f9c90b = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  thunk_FUN_02134474(param_1 + 0x160,0);
  if (*(char *)(param_1 + 0x274) != '\0') {
    *(undefined1 *)(param_1 + 0x274) = 0;
    UnityEngine_Time__set_timeScale_43cd6d8(0x3f800000,0);
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*(long *)(param_1 + 0x230),0);
    *(undefined8 *)(param_1 + 0x230) = 0;
    thunk_FUN_02134474(param_1 + 0x230,0);
  }
  *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  if (0.0 < *(float *)(param_1 + 0x70)) {
    lVar13 = *(long *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),0,*(undefined8 *)(lVar13 + 0x28));
    }
  }
  if ((*(long *)(param_1 + 0xe0) != 0) &&
     (lVar13 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                         (*(long *)(param_1 + 0xe0),*(undefined8 *)PTR_DAT_04cbc3e0),
     puVar10 = PTR_DAT_04cbc428, puVar9 = PTR_DAT_04cbc400, puVar8 = PTR_DAT_04cbc3f8,
     puVar7 = PTR_DAT_04cbc3f0, puVar6 = PTR_DAT_04cbc3e8, puVar5 = PTR_DAT_04cbc3d8,
     puVar4 = PTR_DAT_04cbc3a8, puVar3 = PTR_DAT_04cad568, puVar2 = PTR_DAT_04ca9ae8, lVar13 != 0))
  {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_b8,lVar13,*(undefined8 *)PTR_DAT_04cbc430);
    lStack_70 = lStack_a8;
    puStack_78 = puStack_b0;
    uStack_80 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_80;
    while (uVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                              (&uStack_80,*(undefined8 *)puVar9), lVar13 = lStack_70,
          (uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar11 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar12,0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_80,*(undefined8 *)puVar6);
    if (*(long *)(param_1 + 0xe0) != 0) {
      System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                (*(long *)(param_1 + 0xe0),*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0xe8) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_b8,*(long *)(param_1 + 0xe8),*(undefined8 *)puVar10);
        lStack_90 = lStack_a8;
        puStack_98 = puStack_b0;
        uStack_a0 = uStack_b8;
        uStack_b8 = 0;
        puStack_b0 = &uStack_a0;
        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_a0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_View_PickUpClaw__Dispose_23dae4c(lStack_90,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)puVar7);
        lVar13 = *(long *)(param_1 + 0xe8);
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
          }
          if (*(long *)(param_1 + 0xf0) != 0) {
            System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                      (*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_04cbc3b0);
            if (*(long *)(param_1 + 0xf8) != 0) {
              System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                        (*(long *)(param_1 + 0xf8),*(undefined8 *)PTR_DAT_04cbc3c0);
              if (*(long *)(param_1 + 0x100) != 0) {
                System_Collections_Generic_Dictionary_int__float___Clear_343e444
                          (*(long *)(param_1 + 0x100),*(undefined8 *)puVar5);
                if (*(long *)(param_1 + 0x138) != 0) {
                  System_Collections_Generic_Dictionary_int__float___Clear_343e444
                            (*(long *)(param_1 + 0x138),*(undefined8 *)puVar5);
                  if (*(long *)(param_1 + 0x180) != 0) {
                    System_Collections_Generic_HashSet_long___Clear_37e2394
                              (*(long *)(param_1 + 0x180),*(undefined8 *)PTR_DAT_04cbc418);
                    if (*(long *)(param_1 + 0x200) != 0) {
                      System_Collections_Generic_Dictionary_byte__ValueTuple_int__float____Clear_339f500
                                (*(long *)(param_1 + 0x200),*(undefined8 *)PTR_DAT_04cbc3d0);
                      if (*(long *)(param_1 + 0x218) != 0) {
                        System_Collections_Generic_Dictionary_byte__Vector2___Clear_33a9928
                                  (*(long *)(param_1 + 0x218),*(undefined8 *)PTR_DAT_04cbc3b8);
                        *(undefined8 *)(param_1 + 0x208) = 0;
                        thunk_FUN_02134474(param_1 + 0x208,0);
                        lVar13 = *(long *)puVar3;
                        *(undefined8 *)(param_1 + 0x1d0) = 0;
                        *(undefined8 *)(param_1 + 0x1d8) = 0;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (cRam0000000004f9b94e == '\0') {
                          FUN_02132f7c(PTR_DAT_04cad568);
                          cRam0000000004f9b94e = '\x01';
                        }
                        lVar13 = *(long *)puVar3;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar13 = *(long *)puVar3;
                        }
                        if (**(long **)(lVar13 + 0xb8) != 0) {
                          Dino_BusSand_GameAudio__SetTension_2384784(0,**(long **)(lVar13 + 0xb8),0)
                          ;
                          lVar13 = *(long *)puVar3;
                        }
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (cRam0000000004f9b94e == '\0') {
                          FUN_02132f7c(PTR_DAT_04cad568);
                          cRam0000000004f9b94e = '\x01';
                        }
                        lVar13 = *(long *)puVar3;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar13 = *(long *)puVar3;
                        }
                        if (**(long **)(lVar13 + 0xb8) != 0) {
                          Dino_BusSand_GameAudio__SetHush_23847a4(0,**(long **)(lVar13 + 0xb8),0);
                        }
                        *(undefined8 *)(param_1 + 0x1f8) = 0xc120000000000000;
                        if (*(long *)(param_1 + 0x140) != 0) {
                          System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__float__float____Clear_340daa8
                                    (*(long *)(param_1 + 0x140),*(undefined8 *)PTR_DAT_04cbc3c8);
                          plVar14 = (long *)(param_1 + 0x98);
                          lVar13 = *plVar14;
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
                          if ((uVar11 & 1) != 0) {
                            if (*plVar14 == 0) goto LAB_0249cd34;
                            uVar12 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar2);
                            }
                            UnityEngine_Object__Destroy_43c8114(uVar12,0);
                          }
                          *(undefined8 *)(param_1 + 0x98) = 0;
                          thunk_FUN_02134474(plVar14,0);
                          *(undefined8 *)(param_1 + 0x20) = 0;
                          thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0249cd34:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

