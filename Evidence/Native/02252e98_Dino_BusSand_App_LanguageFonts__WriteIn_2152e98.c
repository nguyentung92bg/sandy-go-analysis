/* IL2CPP: Dino.BusSand.App.LanguageFonts$$WriteIn
bool Dino_BusSand_App_LanguageFonts__WriteIn (TMPro_TMP_Text_o* t, System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$WriteIn
   bool Dino_BusSand_App_LanguageFonts__WriteIn (TMPro_TMP_Text_o* t, System_String_o* lang, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_LanguageFonts__WriteIn_2152e98(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02252e9c to 02352edf has its CatchHandler @ 02252e70 */
  if ((bRam0000000004f9b7cd & 1) == 0) {
                    /* catch() { ... } // from try @ 02252e94 with catch @ 02252ec4 */
    FUN_02132f7c(PTR_DAT_04cab628);
    FUN_02132f7c(PTR_DAT_04cab630);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cab638);
    FUN_02132f7c(PTR_DAT_04cab640);
    FUN_02132f7c(PTR_DAT_04cab648);
    FUN_02132f7c(PTR_DAT_04cab650);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab558);
    bRam0000000004f9b7cd = 1;
  }
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cab530;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_LanguageFonts__FaceForName_2153190(param_2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02252fd8 with catch @ 02252f90 */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        uVar5 = (**(code **)(*param_1 + 0x508))(param_1,*(undefined8 *)(*param_1 + 0x510));
                    /* try { // try from 02252fcc to 02352fd7 has its CatchHandler @ 02252ff8 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02252fd8 to 02353023 has its CatchHandler @ 02252f90 */
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar3 = Dino_BusSand_App_LanguageFonts__AddCharacters_21534f0(lVar4,uVar5);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
                    /* catch() { ... } // from try @ 02252fcc with catch @ 02252ff8 */
        uVar5 = (**(code **)(*param_1 + 0x528))(param_1,*(undefined8 *)(*param_1 + 0x530));
        TMPro_TMP_Text__set_font_42cb6ac(param_1,lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_LanguageFonts__DesktopShader_21522fc(uVar5);
        if (lVar4 != 0) {
          uVar8 = *(undefined8 *)(lVar4 + 0x88);
          if (*(int *)(*(long *)PTR_DAT_04cab558 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = TMPro_TMP_MaterialManager__GetFallbackMaterial_42ed9f8(uVar5,uVar8,0);
          (**(code **)(*param_1 + 0x538))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x540));
                    /* catch() { ... } // from try @ 022531ac with catch @ 022530a8 */
          lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
          if (lVar6 != 0) {
            uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                              (lVar6,lVar4,&lStack_38,*(undefined8 *)PTR_DAT_04cab628);
            if ((uVar3 & 1) == 0) {
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar2;
              }
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
              lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab650);
              System_Collections_Generic_List_object____ctor_3a8138c
                        (lVar6,*(undefined8 *)PTR_DAT_04cab648);
              lStack_38 = lVar6;
              if (lVar7 == 0) goto LAB_0225318c;
              System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                        (lVar7,lVar4,lVar6,*(undefined8 *)PTR_DAT_04cab630);
            }
            if (lStack_38 != 0) {
                    /* try { // try from 02253138 to 02353143 has its CatchHandler @ 022531ec */
              uVar3 = System_Collections_Generic_List_object___Contains_3a81f90
                                (lStack_38,uVar5,*(undefined8 *)PTR_DAT_04cab640);
              if ((uVar3 & 1) == 0) {
                if (lStack_38 == 0) goto LAB_0225318c;
                FUN_01e77d34(lStack_38,uVar5,*(undefined8 *)PTR_DAT_04cab638);
              }
              return 1;
            }
          }
        }
      }
LAB_0225318c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* try { // try from 02253180 to 0235318b has its CatchHandler @ 022531d8 */
  return 0;
}

