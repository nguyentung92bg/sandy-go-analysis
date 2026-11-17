/* IL2CPP: Dino.BusSand.App.LanguageFonts$$DesktopShader
UnityEngine_Material_o* Dino_BusSand_App_LanguageFonts__DesktopShader (UnityEngine_Material_o* preset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$DesktopShader
   UnityEngine_Material_o* Dino_BusSand_App_LanguageFonts__DesktopShader (UnityEngine_Material_o*
   preset, const MethodInfo* method); */

long Dino_BusSand_App_LanguageFonts__DesktopShader_21522fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b7c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab540);
    FUN_02132f7c(PTR_DAT_04cab548);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab590);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab598);
    FUN_02132f7c(PTR_DAT_04cab5a0);
    FUN_02132f7c(PTR_DAT_04cab5a8);
    bRam0000000004f9b7c9 = 1;
  }
  lStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
    uVar4 = UnityEngine_Material__get_shader_437b8d4(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return param_1;
    }
    lVar5 = UnityEngine_Material__get_shader_437b8d4(param_1,0);
    if ((lVar5 != 0) && (lVar5 = UnityEngine_Object__get_name_43c71a4(lVar5,0), lVar5 != 0)) {
      uVar3 = System_String__Contains_46d726c(lVar5,*(undefined8 *)PTR_DAT_04cab5a8,0);
      puVar2 = PTR_DAT_04cab530;
      if ((uVar3 & 1) == 0) {
        return param_1;
      }
      lVar5 = *(long *)PTR_DAT_04cab530;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 != 0) {
        uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                          (lVar5,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cab540);
        lVar5 = lStack_28;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar3 & 1) != 0) {
            return lStack_28;
          }
        }
                    /* try { // try from 022524a4 to 023524c7 has its CatchHandler @ 022524a4
                       catch() { ... } // from try @ 022524a4 with catch @ 022524a4
                       catch() { ... } // from try @ 022524d0 with catch @ 022524a4 */
        uVar4 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)PTR_DAT_04cab5a0,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022524c8 to 023524cf has its CatchHandler @ 022524f4 */
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
                    /* try { // try from 022524d0 to 0235250f has its CatchHandler @ 022524a4 */
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          return param_1;
        }
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
                    /* catch() { ... } // from try @ 022524c8 with catch @ 022524f4 */
        UnityEngine_Material___ctor_437b5a8(lVar5,uVar4,0);
        uVar4 = UnityEngine_Object__get_name_43c71a4(param_1,0);
        uVar4 = System_String__Concat_46c82e0(uVar4,*(undefined8 *)PTR_DAT_04cab598,0);
        if (lVar5 != 0) {
          UnityEngine_Object__set_name_43c72ec(lVar5,uVar4,0);
          UnityEngine_Object__set_hideFlags_43c8654(lVar5,0x3d,0);
          lStack_28 = lVar5;
          UnityEngine_Material__CopyPropertiesFromMaterial_437eef0(lVar5,param_1,0);
          lVar5 = lStack_28;
          uVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,0);
          if (lVar5 != 0) {
            UnityEngine_Material__set_shaderKeywords_437f2f4(lVar5,uVar4,0);
            lVar5 = lStack_28;
            puVar1 = PTR_DAT_04cab590;
            if (*(int *)(*(long *)PTR_DAT_04cab590 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* catch() { ... } // from try @ 02252600 with catch @ 022525b8 */
                    /* try { // try from 022525f4 to 023525ff has its CatchHandler @ 02252620 */
                    /* try { // try from 02252600 to 0235264b has its CatchHandler @ 022525b8 */
            if ((((lVar5 != 0) &&
                 (UnityEngine_Material__SetFloat_4383078
                            (0,lVar5,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),0),
                 lStack_28 != 0)) &&
                (UnityEngine_Material__SetFloat_4383078
                           (0,lStack_28,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0)
                , lStack_28 != 0)) &&
               (UnityEngine_Material__SetFloat_4383078
                          (0,lStack_28,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34),0),
               lStack_28 != 0)) {
                    /* catch() { ... } // from try @ 022525f4 with catch @ 02252620 */
              UnityEngine_Material__SetColor_437bcac
                        (0,0,0,0,lStack_28,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c)
                         ,0);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
              if (lVar5 != 0) {
                System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                          (lVar5,param_1,lStack_28,*(undefined8 *)PTR_DAT_04cab548);
                return lStack_28;
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

