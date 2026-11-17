/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$Find
UnityEngine_Transform_o* Dino_BusSand_App_UI_HudPanel__Find (Dino_BusSand_App_UI_HudPanel_o* __this, System_String_o* nameOrPath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02300720) */
/* WARNING: Removing unreachable block (ram,0x023007b4) */
/* WARNING: Removing unreachable block (ram,0x044d4b30) */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$Find
   UnityEngine_Transform_o* Dino_BusSand_App_UI_HudPanel__Find (Dino_BusSand_App_UI_HudPanel_o*
   __this, System_String_o* nameOrPath, const MethodInfo* method); */

long Dino_BusSand_App_UI_HudPanel__Find_230a038(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0240a044 to 0250a09b has its CatchHandler @ 0240a3e8 */
  if ((bRam0000000004f9c50e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9c50e = 1;
  }
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2,0);
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
                    /* try { // try from 0240a0b4 to 0250a10b has its CatchHandler @ 0240a3e0 */
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar10 & 1) == 0) {
    uVar15 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar10 & 1) == 0)) {
      if (param_2 != 0) {
                    /* try { // try from 0240a11c to 0250a123 has its CatchHandler @ 0240a3e8 */
        uVar10 = System_String__Contains_46d726c(param_2,*(undefined8 *)PTR_DAT_04cabd10,0);
        lVar9 = *(long *)(param_1 + 0xb8);
        if ((uVar10 & 1) == 0) {
          if (lVar9 != 0) {
            uVar15 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
                    /* try { // try from 0240a178 to 0250a19f has its CatchHandler @ 0240a3c4 */
            if ((bRam0000000004f9bc94 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9b30,param_2,0);
              FUN_02132f7c(PTR_DAT_04ca9c08);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              FUN_02132f7c(PTR_DAT_04cb1ba0);
              FUN_02132f7c(PTR_DAT_04cb1ba8);
              FUN_02132f7c(PTR_DAT_04cb1bb0);
              FUN_02132f7c(PTR_DAT_04cb1bb8);
              FUN_02132f7c(PTR_DAT_04cb1bc0);
              FUN_02132f7c(PTR_DAT_04cad740);
              bRam0000000004f9bc94 = 1;
            }
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
            puVar2 = PTR_DAT_04cb1bb0;
            if ((uVar10 & 1) == 0) {
              lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1bc0);
              System_Collections_Generic_Queue_object____ctor_2ce36dc(lVar9,*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_04cb1ba8;
              if (lVar9 == 0) {
LAB_023007b0:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                        (lVar9,uVar15,*(undefined8 *)PTR_DAT_04cb1ba8);
              puVar5 = PTR_DAT_04cad740;
              puVar4 = PTR_DAT_04ca9c08;
              puVar3 = PTR_DAT_04ca9b30;
              if (0 < *(int *)(lVar9 + 0x20)) {
LAB_023004f8:
                lVar13 = System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                                   (lVar9,*(undefined8 *)PTR_DAT_04cb1ba0);
                if (lVar13 != 0) {
                  uVar11 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
                  uVar10 = System_String__op_Equality_46d1108(uVar11,param_2,0);
                  if ((uVar10 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,uVar15,0);
                    if ((uVar10 & 1) != 0) {
                      return lVar13;
                    }
                  }
                  plVar6 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar13,0);
                  do {
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar12 = *plVar6;
                    lVar13 = *(long *)puVar4;
                    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar10 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar13) {
                          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_023005cc;
                        }
                        uVar10 = uVar10 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,lVar13,0);
LAB_023005cc:
                    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    if ((uVar10 & 1) == 0) goto LAB_02300694;
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar12 = *plVar6;
                    lVar13 = *(long *)puVar4;
                    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar10 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar13) {
                          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                          goto LAB_02300634;
                        }
                        uVar10 = uVar10 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,lVar13,1);
LAB_02300634:
                    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    if (plVar8 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
                        FUN_021335a4(plVar8);
                      }
                    }
                    System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                              (lVar9,plVar8,*(undefined8 *)puVar2);
                  } while( true );
                }
                goto LAB_023007b0;
              }
            }
            return 0;
          }
        }
        else {
                    /* try { // try from 0240a134 to 0250a13b has its CatchHandler @ 0240a3e0 */
          if ((lVar9 != 0) &&
             (lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar9,0), lVar9 != 0)) {
            if (param_2 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,0);
              uVar15 = thunk_FUN_0216e89c();
              uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf7c50);
              System_ArgumentNullException___ctor_47afb54(uVar15,uVar11,0);
              uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf7c58);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar15,uVar11);
            }
            if ((bRam0000000004fa8b6d & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7a00);
              FUN_02132f7c(PTR_DAT_04cf5680);
              FUN_02132f7c(PTR_DAT_04cd5630);
              FUN_02132f7c(PTR_DAT_04cf5c60);
              bRam0000000004fa8b6d = 1;
            }
            if (lVar9 != 0) {
              lVar9 = *(long *)(lVar9 + 0x10);
              if (lVar9 != 0) {
                if (param_2 != 0) {
                  if (*(int *)(param_2 + 0x10) == 0) {
                    uVar15 = System_UIntPtr__op_Explicit_488617c(1,0);
                    System_UIntPtr__op_Explicit_4886184(uVar15,0);
                  }
                  else {
                    if (cRam0000000004fa1b52 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cc73d8);
                      cRam0000000004fa1b52 = '\x01';
                    }
                    System_String__GetRawStringData_46cfab8(param_2,0);
                    System_ReadOnlySpan_char___GetPinnableReference_2de139c
                              (&stack0xffffffffffffffc0,*(undefined8 *)PTR_DAT_04cf5680);
                  }
                }
                if (pcRam0000000004fa8ce8 == (code *)0x0) {
                  pcRam0000000004fa8ce8 = (code *)FUN_02132f40(&UNK_00e29202);
                }
                uVar15 = (*pcRam0000000004fa8ce8)(lVar9,&stack0xffffffffffffffb0,0);
                lVar9 = FUN_04444d18(uVar15,*(undefined8 *)PTR_DAT_04cf5c60);
                return lVar9;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return lVar9;
LAB_02300694:
  plVar6 = (long *)thunk_FUN_0216e7a0(plVar6,*(undefined8 *)puVar3);
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    lVar13 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02300708;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,lVar13,0);
LAB_02300708:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (*(int *)(lVar9 + 0x20) < 1) {
    return 0;
  }
  goto LAB_023004f8;
}

