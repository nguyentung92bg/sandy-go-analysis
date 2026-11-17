/* IL2CPP: Dino.BusSand.App.Meta.Feedback.<Post>d__5$$<>m__Finally1
void Dino_BusSand_App_Meta_Feedback__Post_d__5____m__Finally1 (Dino_BusSand_App_Meta_Feedback__Post_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Feedback.<Post>d__5$$<>m__Finally1
   void Dino_BusSand_App_Meta_Feedback__Post_d__5____m__Finally1
   (Dino_BusSand_App_Meta_Feedback__Post_d__5_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Feedback__Post_d__5____m__Finally1_2210ca0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f9bd3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    bRam0000000004f9bd3e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_04ca9b30) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02310d3c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_02310d3c:
                    /* WARNING: Could not recover jumptable at 0x02310d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

