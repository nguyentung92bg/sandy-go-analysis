/* IL2CPP: Dino.BusSand.App.UI.KitPop$$FinishLeaving
void Dino_BusSand_App_UI_KitPop__FinishLeaving (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$FinishLeaving
   void Dino_BusSand_App_UI_KitPop__FinishLeaving (const MethodInfo* method); */

int Dino_BusSand_App_UI_KitPop__FinishLeaving_228a570(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  
  puVar3 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb5118);
    FUN_02132f7c(PTR_DAT_04cb5120);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5128);
    FUN_02132f7c(PTR_DAT_04cb5130);
    FUN_02132f7c(PTR_DAT_04cb5138);
    bRam0000000004f9c1ab = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if ((lVar4 != 0) &&
     (lVar4 = System_Collections_Generic_List_object___ToArray_3a83728
                        (lVar4,*(undefined8 *)PTR_DAT_04cb5120), puVar2 = PTR_DAT_04ca9ae8,
     lVar4 != 0)) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar14 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar9 = *(long *)(lVar4 + 0x20 + uVar14 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
        if ((uVar7 & 1) == 0) {
          if (lVar9 == 0) goto LAB_0238a7ac;
          UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(lVar9,0);
          uVar12 = *(undefined8 *)(lVar9 + 0x68);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(lVar9 + 0x68) == 0) goto LAB_0238a7ac;
            UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(lVar9 + 0x68),0);
          }
          Dino_BusSand_App_UI_KitPop__Finish_228f238(lVar9);
        }
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    puVar2 = PTR_DAT_04cb5138;
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar3;
    }
    lVar9 = *(long *)puVar2;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    puVar8 = *(undefined8 **)(lVar9 + 0xb8);
    lVar10 = puVar8[1];
    if (lVar10 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5128);
      System_Predicate_object____ctor_2c4e748(lVar10,uVar12,*(undefined8 *)PTR_DAT_04cb5130,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar10;
      thunk_FUN_02134474(plVar5,lVar10);
    }
    if (lVar4 != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentNullException_48419e0(8,0,*(undefined8 *)PTR_DAT_04cb5118);
      }
      iVar1 = *(int *)(lVar4 + 0x18);
      if (iVar1 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar9 = *(long *)(lVar4 + 0x10);
          if (lVar9 == 0) goto LAB_03b83398;
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_03b8339c;
          if (lVar10 == 0) goto LAB_03b83398;
          uVar7 = (**(code **)(lVar10 + 0x18))
                            (*(undefined8 *)(lVar10 + 0x40),
                             *(undefined8 *)(lVar9 + uVar14 * 8 + 0x20),
                             *(undefined8 *)(lVar10 + 0x28));
          iVar1 = *(int *)(lVar4 + 0x18);
        } while (((uVar7 & 1) == 0) && (uVar14 = uVar14 + 1, (long)uVar14 < (long)iVar1));
      }
      if (iVar1 <= (int)uVar14) {
        return 0;
      }
      uVar7 = uVar14 & 0xffffffff;
      while( true ) {
        uVar14 = (ulong)((int)uVar14 + 1);
        do {
          uVar11 = (uint)uVar7;
          if (iVar1 <= (int)uVar14) {
            System_Array__Clear_4851dc8(*(undefined8 *)(lVar4 + 0x10),uVar7,iVar1 - uVar11,0);
            iVar1 = *(int *)(lVar4 + 0x18);
            *(uint *)(lVar4 + 0x18) = uVar11;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            return iVar1 - uVar11;
          }
          uVar14 = (ulong)(int)uVar14;
          do {
            lVar9 = *(long *)(lVar4 + 0x10);
            if (lVar9 == 0) goto LAB_03b83398;
            if (*(uint *)(lVar9 + 0x18) <= (uint)uVar14) goto LAB_03b8339c;
            if (lVar10 == 0) goto LAB_03b83398;
            uVar6 = (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),
                               *(undefined8 *)(lVar9 + uVar14 * 8 + 0x20),
                               *(undefined8 *)(lVar10 + 0x28));
            iVar1 = *(int *)(lVar4 + 0x18);
          } while (((uVar6 & 1) != 0) && (uVar14 = uVar14 + 1, (long)uVar14 < (long)iVar1));
          uVar13 = (uint)uVar14;
        } while (iVar1 <= (int)uVar13);
        lVar9 = *(long *)(lVar4 + 0x10);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) <= uVar13) || (*(uint *)(lVar9 + 0x18) <= uVar11)) {
LAB_03b8339c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar7 = (ulong)(uVar11 + 1);
        *(undefined8 *)(lVar9 + 0x20 + (long)(int)uVar11 * 8) =
             *(undefined8 *)(lVar9 + 0x20 + (long)(int)uVar13 * 8);
        thunk_FUN_02134474();
        iVar1 = *(int *)(lVar4 + 0x18);
      }
LAB_03b83398:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0238a7ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

