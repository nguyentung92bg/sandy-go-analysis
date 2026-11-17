/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<InitAsync>d__10$$MoveNext
void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__MoveNext (Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253fe38) */
/* WARNING: Removing unreachable block (ram,0x0253ff08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<InitAsync>d__10$$MoveNext
   void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__MoveNext
   (Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__MoveNext_243f8f8(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if ((bRam0000000004f9cc9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf740);
    FUN_02132f7c(PTR_DAT_04cbf748);
    FUN_02132f7c(PTR_DAT_04cbf750);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbf758);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cbf760);
    FUN_02132f7c(PTR_DAT_04cbf768);
    FUN_02132f7c(PTR_DAT_04cbf770);
    FUN_02132f7c(PTR_DAT_04cbf778);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cbf780);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9cc9b = 1;
  }
  puVar1 = PTR_DAT_04cbf770;
  lVar15 = *(long *)(param_1 + 10);
  uStack_70 = 0;
  uStack_68 = (ulong)*param_1 << 0x20;
  if (*param_1 == 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uStack_68 = 0xffffffff00000000;
    *param_1 = 0xffffffff;
  }
  else {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar15 + 0x30) != '\0') goto LAB_0253febc;
    *(undefined1 *)(lVar15 + 0x30) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Unity_Services_Core_UnityServices__InitializeAsync_42a55a8(0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_70 = System_Threading_Tasks_Task__GetAwaiter_48a0b70(lVar7,0);
    uVar8 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_47704ac(&uStack_70,0);
    if ((uVar8 & 1) == 0) {
      uStack_68 = uStack_68 & 0xffffffff;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_70;
      thunk_FUN_02134474(param_1 + 0xc,0);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__UnityIapProvider__InitAsync_d__10__26b2d9c
                (param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_04cbf748);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_4770574(&uStack_70,0);
  uVar9 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_411ad28(0);
  lVar7 = UnityEngine_Purchasing_ConfigurationBuilder__Instance_4117068(uVar9,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar10 = (long *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object__26fd180
                              (lVar7,*(undefined8 *)PTR_DAT_04cbf750);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf740);
  System_Action_object____ctor_35f0008(uVar9,lVar15,*(undefined8 *)PTR_DAT_04cbf760,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cbf758) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0253fb94;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cbf758,0);
LAB_0253fb94:
  (*(code *)*puVar11)(plVar10,uVar9,puVar11[1]);
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cad200,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0253fc30;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cad288,0);
LAB_0253fc30:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar5 = PTR_DAT_04cad2a8;
  puVar4 = PTR_DAT_04cad290;
  puVar3 = PTR_DAT_04cad270;
  puVar2 = PTR_DAT_04ca9c30;
  puVar1 = PTR_DAT_04ca9c08;
  iVar16 = 0;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0253fcd0;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar1,0);
LAB_0253fcd0:
    uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar8 & 1) == 0) {
      if ((-1 < (long)uStack_68) || (plVar10 == (long *)0x0)) goto LAB_0253fe2c;
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_0253fe04;
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0253fd34;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar4,0);
LAB_0253fd34:
    uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar5,0);
    uVar12 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar12,*(undefined8 *)puVar2,0);
    uVar8 = System_String__IsNullOrEmpty_46d2084(uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar3,0);
      iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
      UnityEngine_Purchasing_ConfigurationBuilder__AddProduct_41171e4(lVar7,uVar12,iVar6 == 9,0);
      iVar16 = iVar16 + 1;
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar16);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0253fe20;
    }
  }
LAB_0253fe04:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04ca9b30,0);
LAB_0253fe20:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0253fe2c:
  uVar9 = System_Int32__ToString_482d750(&uStack_68,0);
  uVar9 = System_String__Concat_46d2b84
                    (*(undefined8 *)PTR_DAT_04cbf778,uVar9,*(undefined8 *)PTR_DAT_04cbf780,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Debug__Log_4360fc8(uVar9,0);
  if (*(int *)(*(long *)PTR_DAT_04cbf768 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Purchasing_UnityPurchasing__Initialize_411aeec(lVar15,lVar7,0);
LAB_0253febc:
  *param_1 = 0xfffffffe;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult_4770c98(param_1 + 2,0);
  return;
}

