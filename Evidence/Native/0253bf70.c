/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$WebViewPackage
System_String_o* Dino_BusSand_Sdk_SdkBootstrap__WebViewPackage (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253c440) */
/* WARNING: Removing unreachable block (ram,0x0253c3c0) */
/* WARNING: Removing unreachable block (ram,0x0253c3d4) */
/* WARNING: Removing unreachable block (ram,0x0253c434) */
/* WARNING: Removing unreachable block (ram,0x0253c3e0) */
/* WARNING: Removing unreachable block (ram,0x0253c42c) */
/* WARNING: Removing unreachable block (ram,0x0253c43c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$WebViewPackage
   System_String_o* Dino_BusSand_Sdk_SdkBootstrap__WebViewPackage (const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SdkBootstrap__WebViewPackage_243bf70(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9cc78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04cbbcb8);
    FUN_02132f7c(PTR_DAT_04cbbd08);
    FUN_02132f7c(PTR_DAT_04cbf540);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbbd10);
    FUN_02132f7c(PTR_DAT_04cb71b8);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cbf548);
    FUN_02132f7c(PTR_DAT_04cbf550);
    FUN_02132f7c(PTR_DAT_04cbf558);
    FUN_02132f7c(PTR_DAT_04cbf560);
    FUN_02132f7c(PTR_DAT_04cbbd20);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cbf568);
    bRam0000000004f9cc78 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = UnityEngine_Application__get_platform_4352d00(0);
  puVar1 = PTR_DAT_04ca9de8;
  if (iVar2 == 0xb) {
    plVar4 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
    UnityEngine_AndroidJavaClass___ctor_432cda0(plVar4,*(undefined8 *)PTR_DAT_04cbbd20,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar3 = UnityEngine_AndroidJavaObject__GetStatic_int__264e068
                      (plVar4,*(undefined8 *)PTR_DAT_04cbbd10,*(undefined8 *)PTR_DAT_04cbbd08);
    iVar2 = 4;
    if (0x19 < iVar3) {
      iVar2 = 5;
    }
    uVar7 = 0;
    if (iVar3 < 0x1a) {
      uVar7 = *(undefined8 *)PTR_DAT_04cbf558;
    }
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0253c17c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_0253c17c:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if ((iVar2 == 5) || (iVar2 == 0)) {
      plVar4 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_AndroidJavaClass___ctor_432cda0(plVar4,*(undefined8 *)PTR_DAT_04cbf548,0);
      lVar12 = *(long *)PTR_DAT_04ca9d18;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_0216b4cc(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar6 = (long *)UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                                 (plVar4,*(undefined8 *)PTR_DAT_04cbf560,
                                  **(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)PTR_DAT_04cbbcb8);
      puVar1 = PTR_DAT_04cbf540;
      if (plVar6 == (long *)0x0) {
        uVar7 = *(undefined8 *)PTR_DAT_04cb71b8;
      }
      else {
        uVar7 = UnityEngine_AndroidJavaObject__Get_object__264dea8
                          (plVar6,*(undefined8 *)PTR_DAT_04cbf550,*(undefined8 *)PTR_DAT_04cbf540);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = UnityEngine_AndroidJavaObject__Get_object__264dea8
                          (plVar6,*(undefined8 *)PTR_DAT_04cbf568,*(undefined8 *)puVar1);
        uVar7 = System_String__Concat_46d2b84(uVar7,*(undefined8 *)PTR_DAT_04cab270,uVar8,0);
      }
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0253c338;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_0253c338:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0253c3a8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_0253c3a8:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)PTR_DAT_04ca9c30;
  }
  return uVar7;
}

