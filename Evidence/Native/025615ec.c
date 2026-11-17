/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteStringPair
void Dino_Tracking_ServerTrackingCore__WriteStringPair (System_Text_StringBuilder_o* sb, System_String_o* key, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteStringPair
   void Dino_Tracking_ServerTrackingCore__WriteStringPair (System_Text_StringBuilder_o* sb,
   System_String_o* key, System_String_o* value, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uStack_64;
  
  Dino_Tracking_ServerTrackingCore__WriteStringValue_2461b8c();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x3a,0);
  if ((bRam0000000004f9ce2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9bb8);
    FUN_02132f7c(PTR_DAT_04ca9bc0);
    FUN_02132f7c(PTR_DAT_04ca9bc8);
    FUN_02132f7c(PTR_DAT_04ca9bd0);
    FUN_02132f7c(PTR_DAT_04ca9bd8);
    FUN_02132f7c(PTR_DAT_04ca9be0);
    FUN_02132f7c(PTR_DAT_04ca9be8);
    FUN_02132f7c(PTR_DAT_04ca9bf0);
    FUN_02132f7c(PTR_DAT_04ca9bf8);
    bRam0000000004f9ce2c = 1;
  }
  uStack_64 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
  puVar7 = PTR_DAT_04ca9bf8;
  puVar6 = PTR_DAT_04ca9be0;
  puVar5 = PTR_DAT_04ca9bd8;
  puVar4 = PTR_DAT_04ca9bd0;
  puVar3 = PTR_DAT_04ca9bc8;
  puVar2 = PTR_DAT_04ca9bc0;
  puVar1 = PTR_DAT_04ca9bb8;
  if ((param_3 != 0) && (0 < *(int *)(param_3 + 0x10))) {
    iVar10 = 0;
    do {
      uVar8 = System_String__get_Chars_46ccb24(param_3,iVar10,0);
      uVar8 = uVar8 & 0xffff;
      if (uVar8 < 0xc) {
        if (uVar8 == 8) {
          uVar9 = *(undefined8 *)puVar1;
        }
        else if (uVar8 == 9) {
          uVar9 = *(undefined8 *)puVar3;
        }
        else {
          if (uVar8 != 10) goto LAB_02561d1c;
          uVar9 = *(undefined8 *)puVar2;
        }
LAB_02561dac:
        System_Text_StringBuilder__Append_46dcdf4(param_1,uVar9,0);
      }
      else {
        if (0x21 < uVar8) {
          if (uVar8 == 0x5c) {
            uVar9 = *(undefined8 *)puVar7;
          }
          else {
            if (uVar8 != 0x22) goto LAB_02561d1c;
            uVar9 = *(undefined8 *)puVar4;
          }
          goto LAB_02561dac;
        }
        if (uVar8 == 0xc) {
          uVar9 = *(undefined8 *)puVar5;
          goto LAB_02561dac;
        }
        if (uVar8 == 0xd) {
          uVar9 = *(undefined8 *)puVar6;
          goto LAB_02561dac;
        }
LAB_02561d1c:
        if (uVar8 < 0x20) {
          System_Text_StringBuilder__Append_46dcdf4(param_1,*(undefined8 *)PTR_DAT_04ca9be8,0);
          uStack_64 = uVar8;
          if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
          uVar9 = System_Int32__ToString_482d92c(&uStack_64,*(undefined8 *)PTR_DAT_04ca9bf0,uVar9,0)
          ;
          goto LAB_02561dac;
        }
        System_Text_StringBuilder__Append_46dd710(param_1,uVar8,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_3 + 0x10));
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
  return;
}

