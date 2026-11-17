/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Poll
void Dino_BusSand_App_QaPilot_Runner__Poll (Dino_BusSand_App_QaPilot_Runner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Poll
   void Dino_BusSand_App_QaPilot_Runner__Poll (Dino_BusSand_App_QaPilot_Runner_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Poll_2158188(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  if ((bRam0000000004f9b7ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba70);
    FUN_02132f7c(PTR_DAT_04caa2d0);
    FUN_02132f7c(PTR_DAT_04caba78);
    bRam0000000004f9b7ef = 1;
  }
  uVar3 = Dino_BusSand_App_QaPilot_Runner__get_InDir_2157748();
  uVar4 = System_IO_Directory__Exists_47ec4f4(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = Dino_BusSand_App_QaPilot_Runner__get_InDir_2157748();
    lVar5 = System_IO_Directory__GetFiles_47f7d08(uVar3,*(undefined8 *)PTR_DAT_04caba78,0);
    puVar2 = PTR_DAT_04caa2d0;
    if (lVar5 == 0) {
LAB_02258454:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02258454 to 02358457 has its CatchHandler @ 022584ec */
      FUN_02133224();
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04caa2d0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b671 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa2d0);
        cRam0000000004f9b671 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      System_Array__Sort_object__2688314
                (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_04caba70);
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar4 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar4) {
LAB_02258458:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02258458 to 023584bf has its CatchHandler @ 02258364 */
            FUN_0213322c();
          }
          uVar3 = *(undefined8 *)(lVar5 + uVar4 * 8 + 0x20);
          lVar6 = System_IO_File__ReadAllText_47f8dcc(uVar3,0);
          System_IO_File__Delete_47f8b84(uVar3,0);
          if ((lVar6 == 0) || (lVar6 = System_String__Split_46d50c0(lVar6,10,0,0), lVar6 == 0))
          goto LAB_02258454;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar1) {
            uVar9 = 0;
            do {
              if (uVar1 <= uVar9) goto LAB_02258458;
              lVar7 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
              if ((lVar7 == 0) || (lVar7 = System_String__Trim_46d6ee0(lVar7,0), lVar7 == 0))
              goto LAB_02258454;
              if (*(int *)(lVar7 + 0x10) != 0) {
                Dino_BusSand_App_QaPilot_Runner__Run_215a62c(param_1,lVar7);
              }
              uVar1 = *(uint *)(lVar6 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar1);
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
  }
  return;
}

