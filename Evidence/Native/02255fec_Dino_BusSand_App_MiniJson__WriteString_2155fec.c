/* IL2CPP: Dino.BusSand.App.MiniJson$$WriteString
void Dino_BusSand_App_MiniJson__WriteString (System_Text_StringBuilder_o* sb, System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$WriteString
   void Dino_BusSand_App_MiniJson__WriteString (System_Text_StringBuilder_o* sb, System_String_o* s,
   const MethodInfo* method); */

void Dino_BusSand_App_MiniJson__WriteString_2155fec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uStack_64;
  
  if ((bRam0000000004f9b7de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9bc0);
    FUN_02132f7c(PTR_DAT_04ca9bc8);
    FUN_02132f7c(PTR_DAT_04ca9bd0);
    FUN_02132f7c(PTR_DAT_04ca9be0);
    FUN_02132f7c(PTR_DAT_04ca9be8);
    FUN_02132f7c(PTR_DAT_04ca9bf0);
    FUN_02132f7c(PTR_DAT_04ca9bf8);
    bRam0000000004f9b7de = 1;
  }
  uStack_64 = 0;
  if ((param_1 == 0) ||
     (System_Text_StringBuilder__Append_46dd710(param_1,0x22,0), puVar6 = PTR_DAT_04ca9bf8,
     puVar5 = PTR_DAT_04ca9bf0, puVar4 = PTR_DAT_04ca9be0, puVar3 = PTR_DAT_04ca9bd0,
     puVar2 = PTR_DAT_04ca9bc8, puVar1 = PTR_DAT_04ca9bc0, param_2 == 0)) {
LAB_022561e8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar10 = 0;
    do {
      uVar7 = System_String__get_Chars_46ccb24(param_2,iVar10,0);
      uVar7 = uVar7 & 0xffff;
      lVar8 = param_1;
      if (uVar7 < 0xd) {
        if (uVar7 == 9) {
          uVar9 = *(undefined8 *)puVar2;
          goto LAB_02256140;
        }
        if (uVar7 == 10) {
          uVar9 = *(undefined8 *)puVar1;
          goto LAB_02256140;
        }
LAB_0225615c:
        if (uVar7 < 0x20) {
          lVar8 = System_Text_StringBuilder__Append_46dcdf4
                            (param_1,*(undefined8 *)PTR_DAT_04ca9be8,0);
          uStack_64 = uVar7;
          uVar9 = System_Int32__ToString_482d7e4(&uStack_64,*(undefined8 *)puVar5,0);
          if (lVar8 != 0) goto LAB_02256140;
          goto LAB_022561e8;
        }
        System_Text_StringBuilder__Append_46dd710(param_1,uVar7,0);
      }
      else {
        if (uVar7 == 0xd) {
          uVar9 = *(undefined8 *)puVar4;
        }
        else if (uVar7 == 0x5c) {
          uVar9 = *(undefined8 *)puVar6;
        }
        else {
          if (uVar7 != 0x22) goto LAB_0225615c;
          uVar9 = *(undefined8 *)puVar3;
        }
LAB_02256140:
        System_Text_StringBuilder__Append_46dcdf4(lVar8,uVar9,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_2 + 0x10));
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
  return;
}

