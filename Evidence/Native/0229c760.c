/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Resolve
UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleUi__Resolve (UnityEngine_Transform_o* root, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02300720) */
/* WARNING: Removing unreachable block (ram,0x023007b4) */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Resolve
   UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleUi__Resolve (UnityEngine_Transform_o*
   root, System_String_o* path, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleUi__Resolve_219c760(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9fb = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((uVar7 & 1) != 0) ||
     (uVar7 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar7 & 1) != 0)) {
    return 0;
  }
  if (param_1 != 0) {
    lVar8 = UnityEngine_Transform__Find_43d4bec(param_1,param_2,0);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar13);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      return lVar8;
    }
    if (param_2 != 0) {
      iVar6 = System_String__LastIndexOf_46d7e20(param_2,0x2f,0);
      if (-1 < iVar6) {
        param_2 = System_String__Substring_46d6a94(param_2,iVar6 + 1,0);
      }
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
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
      puVar2 = PTR_DAT_04cb1bb0;
      if ((uVar7 & 1) == 0) {
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1bc0);
        System_Collections_Generic_Queue_object____ctor_2ce36dc(lVar8,*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_04cb1ba8;
        if (lVar8 == 0) {
LAB_023007b0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                  (lVar8,param_1,*(undefined8 *)PTR_DAT_04cb1ba8);
        puVar5 = PTR_DAT_04cad740;
        puVar4 = PTR_DAT_04ca9c08;
        puVar3 = PTR_DAT_04ca9b30;
        if (0 < *(int *)(lVar8 + 0x20)) {
LAB_023004f8:
          lVar13 = System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                             (lVar8,*(undefined8 *)PTR_DAT_04cb1ba0);
          if (lVar13 != 0) {
            uVar9 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
            uVar7 = System_String__op_Equality_46d1108(uVar9,param_2,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,param_1,0);
              if ((uVar7 & 1) != 0) {
                return lVar13;
              }
            }
            plVar10 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar13,0);
            do {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar14 = *plVar10;
              lVar13 = *(long *)puVar4;
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar7 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar13) {
                    puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_023005cc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar13,0);
LAB_023005cc:
              uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar7 & 1) == 0) goto LAB_02300694;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar14 = *plVar10;
              lVar13 = *(long *)puVar4;
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar7 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar13) {
                    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_02300634;
                  }
                  uVar7 = uVar7 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar13,1);
LAB_02300634:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(plVar12);
                }
              }
              System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                        (lVar8,plVar12,*(undefined8 *)puVar2);
            } while( true );
          }
          goto LAB_023007b0;
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02300694:
  plVar10 = (long *)thunk_FUN_0216e7a0(plVar10,*(undefined8 *)puVar3);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    lVar13 = *(long *)puVar3;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02300708;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar13,0);
LAB_02300708:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (*(int *)(lVar8 + 0x20) < 1) {
    return 0;
  }
  goto LAB_023004f8;
}

