/* IL2CPP: Dino.BusSand.RenderQuality$$CreateVolume
UnityEngine_Rendering_Volume_o* Dino_BusSand_RenderQuality__CreateVolume (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.RenderQuality$$CreateVolume
   UnityEngine_Rendering_Volume_o* Dino_BusSand_RenderQuality__CreateVolume
   (UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_RenderQuality__CreateVolume_238b32c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c89d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbda8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbdb0);
    FUN_02132f7c(PTR_DAT_04cbbdb8);
    FUN_02132f7c(PTR_DAT_04cbbdc0);
    FUN_02132f7c(PTR_DAT_04cbbdc8);
    FUN_02132f7c(PTR_DAT_04cbbdd0);
    FUN_02132f7c(PTR_DAT_04cbbdd8);
    FUN_02132f7c(PTR_DAT_04cbbde0);
    FUN_02132f7c(PTR_DAT_04cbbde8);
    FUN_02132f7c(PTR_DAT_04cbbdf0);
    FUN_02132f7c(PTR_DAT_04cbbdf8);
    FUN_02132f7c(PTR_DAT_04cbbe00);
    bRam0000000004f9c89d = 1;
  }
  puVar3 = PTR_DAT_04cbbe00;
  puVar1 = PTR_DAT_04caa070;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_RenderQuality__Initialize_238a2f8();
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
  if ((lVar5 != 0) &&
     (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), puVar1 = PTR_DAT_04cbbda8,
     lVar6 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
    lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar5,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_04cbbdb0;
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x20) = 1;
      *(undefined4 *)(lVar5 + 0x24) = 0x41200000;
      uVar7 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar5 + 0x2c) = 0x3f800000;
      lVar6 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc(uVar7);
      if (lVar6 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)PTR_DAT_04cbbdf8,0);
        *(long *)(lVar5 + 0x30) = lVar6;
        thunk_FUN_02134474((long *)(lVar5 + 0x30),lVar6);
        uVar8 = Dino_BusSand_RenderQuality__get_PostProcessing_238a204();
        if ((uVar8 & 1) == 0) {
          return lVar5;
        }
        lVar9 = UnityEngine_Rendering_VolumeProfile__Add_object__295cbdc
                          (lVar6,0,*(undefined8 *)PTR_DAT_04cbbde8);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
          UnityEngine_Rendering_VolumeParameter_Int32Enum___Override_31d8b18
                    (*(long *)(lVar9 + 0x38),0,*(undefined8 *)PTR_DAT_04cbbdb8);
          lVar9 = UnityEngine_Rendering_VolumeProfile__Add_object__295cbdc
                            (lVar6,0,*(undefined8 *)PTR_DAT_04cbbde0);
          puVar1 = PTR_DAT_04cbbdc8;
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
            UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                      (0,*(long *)(lVar9 + 0x38),*(undefined8 *)PTR_DAT_04cbbdc8);
            if (*(long *)(lVar9 + 0x40) != 0) {
              UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                        (0x41000000,*(long *)(lVar9 + 0x40),*(undefined8 *)puVar1);
              if (*(long *)(lVar9 + 0x58) != 0) {
                UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                          (0x40c00000,*(long *)(lVar9 + 0x58),*(undefined8 *)puVar1);
                lVar9 = UnityEngine_Rendering_VolumeProfile__Add_object__295cbdc
                                  (lVar6,0,*(undefined8 *)PTR_DAT_04cbbdf0);
                puVar3 = PTR_DAT_04cbbdc0;
                if ((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
                  UnityEngine_Rendering_VolumeParameter_Color___Override_31d79a8
                            (_UNK_00e205f8,_UNK_00e20754,_UNK_00e2065c,0x3f800000,
                             *(long *)(lVar9 + 0x38),*(undefined8 *)PTR_DAT_04cbbdc0);
                  if (*(long *)(lVar9 + 0x48) != 0) {
                    UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                              (_UNK_00e20390,*(long *)(lVar9 + 0x48),*(undefined8 *)puVar1);
                    if (*(long *)(lVar9 + 0x50) != 0) {
                      UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                                (0x3f000000,*(long *)(lVar9 + 0x50),*(undefined8 *)puVar1);
                      puVar4 = PTR_DAT_04cbbdd0;
                      if (*(long *)(lVar9 + 0x58) != 0) {
                        UnityEngine_Rendering_VolumeParameter_bool___Override_31d70e4
                                  (*(long *)(lVar9 + 0x58),0,*(undefined8 *)PTR_DAT_04cbbdd0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (cRam0000000004f9c49a == '\0') {
                          FUN_02132f7c(PTR_DAT_04cb27f8);
                          cRam0000000004f9c49a = '\x01';
                        }
                        lVar9 = *(long *)puVar2;
                        if (*(int *)(lVar9 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar9 = *(long *)puVar2;
                        }
                        if (**(int **)(lVar9 + 0xb8) != 2) {
                          return lVar5;
                        }
                        lVar6 = UnityEngine_Rendering_VolumeProfile__Add_object__295cbdc
                                          (lVar6,0,*(undefined8 *)PTR_DAT_04cbbdd8);
                        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
                          UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                                    (_UNK_00e208d8,*(long *)(lVar6 + 0x40),*(undefined8 *)puVar1);
                          if (*(long *)(lVar6 + 0x48) != 0) {
                            UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                                      (0x3e800000,*(long *)(lVar6 + 0x48),*(undefined8 *)puVar1);
                            if (*(long *)(lVar6 + 0x50) != 0) {
                              UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                                        (_UNK_00e20094,*(long *)(lVar6 + 0x50),*(undefined8 *)puVar1
                                        );
                              if (*(long *)(lVar6 + 0x58) != 0) {
                                UnityEngine_Rendering_VolumeParameter_float___Override_31d9ae4
                                          (0x41000000,*(long *)(lVar6 + 0x58),*(undefined8 *)puVar1)
                                ;
                                if (*(long *)(lVar6 + 0x60) != 0) {
                                  UnityEngine_Rendering_VolumeParameter_Color___Override_31d79a8
                                            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                             *(long *)(lVar6 + 0x60),*(undefined8 *)puVar3);
                                  if (*(long *)(lVar6 + 0x68) != 0) {
                                    UnityEngine_Rendering_VolumeParameter_bool___Override_31d70e4
                                              (*(long *)(lVar6 + 0x68),0,*(undefined8 *)puVar4);
                                    return lVar5;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

