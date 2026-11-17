/* IL2CPP: Dino.BusSand.App.Meta.SystemOpen$$MarkGuided
void Dino_BusSand_App_Meta_SystemOpen__MarkGuided (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpen$$MarkGuided
   void Dino_BusSand_App_Meta_SystemOpen__MarkGuided (int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bf1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bf1f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x128) == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(uVar4,*(undefined8 *)PTR_DAT_04cad6e8);
      if (lVar3 == 0) goto LAB_023435b4;
      *(undefined8 *)(lVar3 + 0x128) = uVar4;
      thunk_FUN_02134474(lVar3 + 0x128,uVar4);
      lVar3 = *(long *)puVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x128), lVar3 != 0)) {
      uVar5 = System_Collections_Generic_List_int___Contains_3a2c3ec
                        (lVar3,param_1,*(undefined8 *)PTR_DAT_04cad860);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x128), lVar3 != 0)) {
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)PTR_DAT_04caa160;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = param_1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar3,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          puVar2 = PTR_DAT_04cabaf8;
          if ((bRam0000000004f9c0ee & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            bRam0000000004f9c0ee = 1;
          }
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar2;
          }
          *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
          fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
          *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = fVar8 + 0.5;
          return;
        }
      }
    }
  }
LAB_023435b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

