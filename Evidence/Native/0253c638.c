/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_0
bool Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_0 (Dino_BusSand_Sdk_SdkBootstrap___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_0
   bool Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_0 (Dino_BusSand_Sdk_SdkBootstrap___c_o*
   __this, const MethodInfo* method); */

byte Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_0_243c638(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong auStack_80 [3];
  long lStack_68;
  
  puVar1 = PTR_DAT_04caa408;
  if ((bRam0000000004f9cc7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa408);
    bRam0000000004f9cc7a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = MaxSdkAndroid__IsInitialized_3bc1520(0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = MaxSdkAndroid__GetSdkConfiguration_3bc1620(0);
  if (lVar8 == 0) {
LAB_0253c6d8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar8 + 0x24) != 1) {
    return 0;
  }
  lVar8 = MaxSdkBase__get_CmpService_3bc3338(0);
  puVar1 = PTR_DAT_04cc9e28;
  if (lVar8 == 0) goto LAB_0253c6d8;
  if ((bRam0000000004fa087f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9f00,0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cc9e28);
    FUN_02132f7c(PTR_DAT_04cc9e38);
    bRam0000000004fa087f = 1;
  }
  puVar2 = PTR_DAT_04ca9d18;
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar1;
  }
  lVar17 = *(long *)puVar2;
  lVar16 = *(long *)(lVar17 + 0x38);
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar16 == 0) {
    FUN_0216b4cc(lVar17);
    lVar16 = *(long *)(lVar17 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_0216b470();
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_0216b470();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar16 = **(long **)(lVar16 + 0xb8);
  uVar13 = *(undefined8 *)PTR_DAT_04cc9e38;
  lVar17 = *(long *)PTR_DAT_04ca9f00;
  plVar15 = *(long **)(lVar17 + 0x38);
  if (plVar15 == (long *)0x0) {
    FUN_0216b4cc(lVar17);
    plVar15 = *(long **)(lVar17 + 0x38);
  }
  lVar17 = *plVar15;
  if (*(long *)(lVar17 + 0x38) == 0) {
    FUN_0216b4cc(lVar17);
  }
  uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810(*(undefined8 *)(lVar8 + 0x18),0);
  uVar13 = UnityEngine_AndroidJNIHelper__GetMethodID_bool__264ba74
                     (uVar12,uVar13,lVar16,1,**(undefined8 **)(lVar17 + 0x38));
  lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
  lVar17 = tpidr_el0;
  lStack_68 = *(long *)(lVar17 + 0x28);
  if (*(long *)(lVar14 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cc3f68);
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04cc3f70);
    FUN_02132f7c(PTR_DAT_04ca9d80);
    FUN_02132f7c(PTR_DAT_04cc3f78);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cc3f80);
    FUN_02132f7c(PTR_DAT_04cc3f88);
    FUN_02132f7c(PTR_DAT_04cc3f90);
    if (*(long *)(lVar14 + 0x38) != 0) goto LAB_0288ace0;
    FUN_0216b4cc(lVar14);
    if (lVar16 == 0) goto LAB_0288ad3c;
LAB_0288ace4:
    uVar7 = *(ulong *)(lVar16 + 0x18);
    if (uVar7 == 0) goto LAB_0288ad40;
    if ((uVar7 & 0xffffffff) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (long)auStack_80 -
               ((-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 | (uVar7 & 0xffffffff) << 3) + 0xf &
               0xfffffffffffffff0);
    }
    func_0x049b52e0(lVar18,0);
    if ((int)uVar7 < 0) {
      System_ThrowHelper__ThrowArgumentOutOfRangeException_484fde4(0);
    }
  }
  else {
LAB_0288ace0:
    if (lVar16 != 0) goto LAB_0288ace4;
LAB_0288ad3c:
    uVar7 = 0;
LAB_0288ad40:
    lVar18 = 0;
  }
  UnityEngine_AndroidJNI__PushLocalFrame_4322b1c((int)uVar7 + 1,0);
  UnityEngine_AndroidJNIHelper__CreateJNIArgArray_431fe54(lVar16,lVar18,uVar7 & 0xffffffff,0);
  puVar1 = PTR_DAT_04ca9ac8;
  auStack_80[1] = 0;
  uVar12 = **(undefined8 **)(lVar14 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  puVar2 = PTR_DAT_04cc3f78;
  if (*(int *)(*(long *)PTR_DAT_04cc3f78 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_AndroidReflection__IsPrimitive_4330a44(uVar12,0);
  uVar12 = **(undefined8 **)(lVar14 + 0x38);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
    uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x90) + 0x20,0);
    uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
    if ((uVar9 & 1) != 0) {
      uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810(*(undefined8 *)(lVar8 + 0x18),0)
      ;
      plVar15 = (long *)UnityEngine_AndroidJNISafe__CallStaticStringMethod_432a728
                                  (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
      lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470(lVar8);
      }
      if (plVar15 == (long *)0x0) {
        if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0288bba8;
      }
      if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
        if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar15);
        }
        goto LAB_0288bba8;
      }
      pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
      goto LAB_0288b760;
    }
    uVar12 = **(undefined8 **)(lVar14 + 0x38);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
    uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cc3f68,0);
    uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
    if ((uVar9 & 1) == 0) {
      uVar12 = **(undefined8 **)(lVar14 + 0x38);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
      uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cc3f70,0);
      uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
      if ((uVar9 & 1) != 0) {
        uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                           (*(undefined8 *)(lVar8 + 0x18),0);
        lVar8 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_43214d8
                          (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
        if (lVar8 == 0) goto LAB_0288b7ac;
        plVar15 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9d80);
        UnityEngine_AndroidJavaObject___ctor_432e2c8(plVar15,lVar8,0);
        lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470(lVar8);
        }
        if (plVar15 == (long *)0x0) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_0288bba8;
        }
        if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar15);
          }
          goto LAB_0288bba8;
        }
        pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
        goto LAB_0288b760;
      }
      lVar16 = *(long *)(puVar1 + 0xa0);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = System_Type__GetTypeFromHandle_483f0b4(lVar16 + 0x20,0);
      uVar10 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar14 + 0x38),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_AndroidReflection__IsAssignableFrom_4330a58(uVar12,uVar10,0);
      if ((uVar9 & 1) == 0) {
        uVar13 = **(undefined8 **)(lVar14 + 0x38);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar15 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
        if (plVar15 == (long *)0x0) {
          uVar13 = thunk_FUN_021985a8(PTR_DAT_04cc3f98);
          uVar12 = 0;
        }
        else {
          uVar13 = thunk_FUN_021985a8(PTR_DAT_04cc3f98);
          uVar12 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        }
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04caac00);
        uVar13 = System_String__Concat_46d2b84(uVar13,uVar12,uVar10,0);
        thunk_FUN_021985a8(PTR_DAT_04ca9c80);
        uVar12 = thunk_FUN_0216e89c();
        System_Exception___ctor_4864510(uVar12,uVar13,0);
        if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar12,lVar14);
        }
        goto LAB_0288bba8;
      }
      uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810(*(undefined8 *)(lVar8 + 0x18),0)
      ;
      uVar13 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_43214d8
                         (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
      bVar3 = UnityEngine_AndroidJavaObject__FromJavaArray_bool__264d048
                        (uVar13,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    }
    else {
      uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810(*(undefined8 *)(lVar8 + 0x18),0)
      ;
      lVar8 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_43214d8
                        (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
      if (lVar8 != 0) {
        plVar15 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
        UnityEngine_AndroidJavaClass___ctor_43302f4(plVar15,lVar8,0);
        lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470(lVar8);
        }
        if (plVar15 == (long *)0x0) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_0288bba8;
        }
        if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar15);
          }
          goto LAB_0288bba8;
        }
        pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
        goto LAB_0288b760;
      }
LAB_0288b7ac:
      bVar3 = 0;
    }
  }
  else {
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
    uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x48) + 0x20,0);
    uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
    if ((uVar9 & 1) == 0) {
      uVar12 = **(undefined8 **)(lVar14 + 0x38);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
      uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x28) + 0x20,0);
      uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
      if ((uVar9 & 1) == 0) {
        uVar12 = **(undefined8 **)(lVar14 + 0x38);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
        uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x18) + 0x20,0);
        uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
        if ((uVar9 & 1) == 0) {
          uVar12 = **(undefined8 **)(lVar14 + 0x38);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
          uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x30) + 0x20,0);
          uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
          if ((uVar9 & 1) == 0) {
            uVar12 = **(undefined8 **)(lVar14 + 0x38);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
            uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x38) + 0x20,0);
            uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
            if ((uVar9 & 1) == 0) {
              uVar12 = **(undefined8 **)(lVar14 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
              uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x68) + 0x20,0);
              uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
              if ((uVar9 & 1) == 0) {
                uVar12 = **(undefined8 **)(lVar14 + 0x38);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
                uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x78) + 0x20,0);
                uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
                if ((uVar9 & 1) == 0) {
                  uVar12 = **(undefined8 **)(lVar14 + 0x38);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
                  uVar10 = System_Type__GetTypeFromHandle_483f0b4(*(long *)(puVar1 + 0x80) + 0x20,0)
                  ;
                  uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
                  if ((uVar9 & 1) == 0) {
                    uVar12 = **(undefined8 **)(lVar14 + 0x38);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
                    uVar10 = System_Type__GetTypeFromHandle_483f0b4
                                       (*(long *)(puVar1 + 0x88) + 0x20,0);
                    uVar9 = System_Type__op_Equality_4847b28(uVar12,uVar10,0);
                    if ((uVar9 & 1) == 0) goto LAB_0288b7ac;
                    uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                                       (*(undefined8 *)(lVar8 + 0x18),0);
                    uVar5 = UnityEngine_AndroidJNISafe__CallStaticCharMethod_432a7d8
                                      (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
                    auStack_80[0] = CONCAT62(auStack_80[0]._2_6_,uVar5);
                    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x88),auStack_80);
                    lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                      lVar8 = FUN_0216b470(lVar8);
                    }
                    pcVar11 = (char *)FUN_01e76eec(uVar13,lVar8);
                  }
                  else {
                    uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                                       (*(undefined8 *)(lVar8 + 0x18),0);
                    auStack_80[0] =
                         UnityEngine_AndroidJNISafe__CallStaticDoubleMethod_432a848
                                   (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
                    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),auStack_80);
                    lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                      lVar8 = FUN_0216b470(lVar8);
                    }
                    pcVar11 = (char *)FUN_01e76eec(uVar13,lVar8);
                  }
                }
                else {
                  uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                                     (*(undefined8 *)(lVar8 + 0x18),0);
                  uVar6 = UnityEngine_AndroidJNISafe__CallStaticFloatMethod_432a8c4
                                    (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
                  auStack_80[0] = CONCAT44(auStack_80[0]._4_4_,uVar6);
                  uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),auStack_80);
                  lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
                  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    lVar8 = FUN_0216b470(lVar8);
                  }
                  pcVar11 = (char *)FUN_01e76eec(uVar13,lVar8);
                }
              }
              else {
                uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                                   (*(undefined8 *)(lVar8 + 0x18),0);
                auStack_80[0] =
                     UnityEngine_AndroidJNISafe__CallStaticLongMethod_432a940
                               (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
                uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),auStack_80);
                lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0216b470(lVar8);
                }
                pcVar11 = (char *)FUN_01e76eec(uVar13,lVar8);
              }
            }
            else {
              uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                                 (*(undefined8 *)(lVar8 + 0x18),0);
              uVar5 = UnityEngine_AndroidJNISafe__CallStaticShortMethod_432a9b0
                                (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
              auStack_80[0] = CONCAT62(auStack_80[0]._2_6_,uVar5);
              uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x38),auStack_80);
              lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
              if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_0216b470(lVar8);
              }
              pcVar11 = (char *)FUN_01e76eec(uVar13,lVar8);
            }
          }
          else {
            uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                               (*(undefined8 *)(lVar8 + 0x18),0);
            uVar4 = UnityEngine_AndroidJNISafe__CallStaticSByteMethod_432aa20
                              (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
            auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,uVar4);
            plVar15 = (long *)FUN_02133100(*(undefined8 *)(puVar1 + 0x30),auStack_80);
            lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0216b470(lVar8);
            }
            if (plVar15 == (long *)0x0) {
              if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              goto LAB_0288bba8;
            }
            if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
              if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(plVar15);
              }
              goto LAB_0288bba8;
            }
            pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cc3f90,0);
          uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                             (*(undefined8 *)(lVar8 + 0x18),0);
          uVar4 = UnityEngine_AndroidJNISafe__CallStaticSByteMethod_432aa20
                            (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
          auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,uVar4);
          plVar15 = (long *)FUN_02133100(*(undefined8 *)(puVar1 + 0x18),auStack_80);
          lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0216b470(lVar8);
          }
          if (plVar15 == (long *)0x0) {
            if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_0288bba8;
          }
          if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
            if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar15);
            }
            goto LAB_0288bba8;
          }
          pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
        }
      }
      else {
        uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810
                           (*(undefined8 *)(lVar8 + 0x18),0);
        uVar4 = UnityEngine_AndroidJNISafe__CallStaticBooleanMethod_432aa90
                          (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
        auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,uVar4) & 0xffffffffffffff01;
        plVar15 = (long *)FUN_02133100(*(undefined8 *)(puVar1 + 0x28),auStack_80);
        lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470(lVar8);
        }
        if (plVar15 == (long *)0x0) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_0288bba8;
        }
        if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
          if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar15);
          }
          goto LAB_0288bba8;
        }
        pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
      }
    }
    else {
      uVar12 = UnityEngine_GlobalJavaObjectRef__op_Implicit_432c810(*(undefined8 *)(lVar8 + 0x18),0)
      ;
      uVar6 = UnityEngine_AndroidJNISafe__CallStaticIntMethod_432ab00
                        (uVar12,uVar13,lVar18,uVar7 & 0xffffffff,0);
      auStack_80[0] = CONCAT44(auStack_80[0]._4_4_,uVar6);
      plVar15 = (long *)FUN_02133100(*(undefined8 *)(puVar1 + 0x48),auStack_80);
      lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470(lVar8);
      }
      if (plVar15 == (long *)0x0) {
        if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0288bba8;
      }
      if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar8 + 0x40)) {
        if (*(long *)(lVar17 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar15);
        }
        goto LAB_0288bba8;
      }
      pcVar11 = (char *)thunk_FUN_0216e9e4(plVar15);
    }
LAB_0288b760:
    bVar3 = *pcVar11 != '\0';
  }
  UnityEngine_AndroidJNI__PopLocalFrame_4322b58(0,0);
  if (*(long *)(lVar17 + 0x28) == lStack_68) {
    return bVar3 & 1;
  }
LAB_0288bba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

