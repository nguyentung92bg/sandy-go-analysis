/* IL2CPP: Dino.BusSand.Util$$FindDeep
UnityEngine_Transform_o* Dino_BusSand_Util__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248d968) */
/* WARNING: Removing unreachable block (ram,0x0248d924) */
/* WARNING: Removing unreachable block (ram,0x0248d6a4) */
/* WARNING: Removing unreachable block (ram,0x0248d6a8) */
/* IL2CPP: Dino.BusSand.Util$$FindDeep
   UnityEngine_Transform_o* Dino_BusSand_Util__FindDeep (UnityEngine_Transform_o* root,
   System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_Util__FindDeep_238d3bc(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1ba0);
    FUN_02132f7c(PTR_DAT_04cb1ba8);
    FUN_02132f7c(PTR_DAT_04cb1bb0);
    FUN_02132f7c(PTR_DAT_04cb1bb8);
    FUN_02132f7c(PTR_DAT_04cb1bc0);
    FUN_02132f7c(PTR_DAT_04cad740);
    bRam0000000004f9c8b3 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1bc0);
  System_Collections_Generic_Queue_object____ctor_2ce36dc(lVar8,*(undefined8 *)PTR_DAT_04cb1bb0);
  puVar5 = PTR_DAT_04cb1ba0;
  puVar2 = PTR_DAT_04ca9b30;
  if (param_1 != 0) {
    plVar9 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(param_1,0);
    puVar6 = PTR_DAT_04cb1ba8;
    puVar4 = PTR_DAT_04cad740;
    puVar3 = PTR_DAT_04ca9c08;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0248d558;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,0);
LAB_0248d558:
      uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar7 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_0216e7a0(plVar9,*(undefined8 *)puVar2);
        if (plVar9 == (long *)0x0) goto LAB_0248d928;
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 == 0) goto LAB_0248d670;
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0248d658;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0248d5c0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,1);
LAB_0248d5c0:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar11);
        }
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Queue_object___Enqueue_2ce3bf4(lVar8,plVar11,*(undefined8 *)puVar6)
      ;
    } while( true );
  }
LAB_0248d964:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_0248d658:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0248d68c;
    }
  }
LAB_0248d670:
  puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar2,0);
LAB_0248d68c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0248d928:
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x20) < 1) {
      return 0;
    }
    if ((lVar8 != 0) &&
       (lVar13 = System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                           (lVar8,*(undefined8 *)puVar5), lVar13 != 0)) {
      uVar12 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
      uVar7 = System_String__op_Equality_46d1108(uVar12,param_2,0);
      if ((uVar7 & 1) != 0) {
        return lVar13;
      }
      plVar9 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar13,0);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0248d7a0;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,0);
LAB_0248d7a0:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar7 & 1) == 0) goto LAB_0248d8a8;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0248d808;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,1);
LAB_0248d808:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          lVar13 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar11);
          }
        }
        System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                  (lVar8,plVar11,*(undefined8 *)puVar6);
      } while( true );
    }
  }
  goto LAB_0248d964;
LAB_0248d8a8:
  plVar9 = (long *)thunk_FUN_0216e7a0(plVar9,*(undefined8 *)puVar2);
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0248d90c;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar2,0);
LAB_0248d90c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  goto LAB_0248d928;
}

