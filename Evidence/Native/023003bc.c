/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$FindDeep
UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023007b4) */
/* WARNING: Removing unreachable block (ram,0x02300720) */
/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$FindDeep
   UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__FindDeep (UnityEngine_Transform_o* root,
   System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  
  if ((bRam0000000004f9bc94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
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
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar5 = PTR_DAT_04cb1bb0;
  if ((uVar6 & 1) == 0) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1bc0);
    System_Collections_Generic_Queue_object____ctor_2ce36dc(lVar7,*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_04cb1ba8;
    if (lVar7 == 0) {
LAB_023007b0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
              (lVar7,param_1,*(undefined8 *)PTR_DAT_04cb1ba8);
    puVar4 = PTR_DAT_04cad740;
    puVar3 = PTR_DAT_04ca9c08;
    puVar2 = PTR_DAT_04ca9b30;
    if (0 < *(int *)(lVar7 + 0x20)) {
LAB_023004f8:
      lVar8 = System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                        (lVar7,*(undefined8 *)PTR_DAT_04cb1ba0);
      if (lVar8 != 0) {
        uVar9 = UnityEngine_Object__get_name_43c71a4(lVar8,0);
        uVar6 = System_String__op_Equality_46d1108(uVar9,param_2,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,param_1,0);
          if ((uVar6 & 1) != 0) {
            return lVar8;
          }
        }
        plVar10 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar8,0);
        do {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = *plVar10;
          lVar8 = *(long *)puVar3;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_023005cc;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar8,0);
LAB_023005cc:
          uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if ((uVar6 & 1) == 0) goto LAB_02300694;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = *plVar10;
          lVar8 = *(long *)puVar3;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02300634;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar8,1);
LAB_02300634:
          plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar12);
            }
          }
          System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                    (lVar7,plVar12,*(undefined8 *)puVar5);
        } while( true );
      }
      goto LAB_023007b0;
    }
  }
  return 0;
LAB_02300694:
  plVar10 = (long *)thunk_FUN_0216e7a0(plVar10,*(undefined8 *)puVar2);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    lVar8 = *(long *)puVar2;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar6 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02300708;
        }
        uVar6 = uVar6 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar8,0);
LAB_02300708:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (*(int *)(lVar7 + 0x20) < 1) {
    return 0;
  }
  goto LAB_023004f8;
}

