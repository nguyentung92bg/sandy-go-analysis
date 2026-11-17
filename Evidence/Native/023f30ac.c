/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$get_Qa
System_String_o* Dino_BusSand_App_UI_HomeToonFace__get_Qa (Dino_BusSand_App_UI_HomeToonFace_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$get_Qa
   System_String_o* Dino_BusSand_App_UI_HomeToonFace__get_Qa (Dino_BusSand_App_UI_HomeToonFace_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__get_Qa_22f30ac(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c475 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb7768);
    bRam0000000004f9c475 = 1;
  }
  plVar2 = (long *)FUN_02133068(*(undefined8 *)puVar1,7);
  puVar1 = PTR_DAT_04ca9ac8;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_023f3398;
    uStack_24 = *(undefined4 *)(lVar5 + 0x20);
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x78),&uStack_24);
    if (plVar2 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_023f33a0;
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar5;
        thunk_FUN_02134474(plVar2 + 4,lVar5);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) goto LAB_023f339c;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          uStack_28 = *(undefined4 *)(lVar5 + 0x24);
          lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_28);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_023f33a0;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
            plVar2[5] = lVar5;
            thunk_FUN_02134474(plVar2 + 5,lVar5);
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) goto LAB_023f339c;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              uStack_34 = *(undefined4 *)(lVar5 + 0x28);
              lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_34);
              if ((lVar5 != 0) &&
                 (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
              goto LAB_023f33a0;
              if (2 < *(uint *)(plVar2 + 3)) {
                plVar2[6] = lVar5;
                thunk_FUN_02134474(plVar2 + 6,lVar5);
                lVar5 = *(long *)(param_1 + 0x20);
                if (lVar5 == 0) goto LAB_023f339c;
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                  uStack_38 = *(undefined4 *)(lVar5 + 0x2c);
                  lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_38);
                  if ((lVar5 != 0) &&
                     (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) {
LAB_023f33a0:
                    uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    FUN_021330e8(uVar4,0);
                  }
                  if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
                    plVar2[7] = lVar5;
                    thunk_FUN_02134474(plVar2 + 7,lVar5);
                    uStack_3c = *(undefined4 *)(param_1 + 0x6c);
                    lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_3c);
                    if ((lVar5 != 0) &&
                       (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar3 == 0)) goto LAB_023f33a0;
                    if (4 < *(uint *)(plVar2 + 3)) {
                      plVar2[8] = lVar5;
                      thunk_FUN_02134474(plVar2 + 8,lVar5);
                      uStack_40 = *(undefined4 *)(param_1 + 0x70);
                      lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_40);
                      if ((lVar5 != 0) &&
                         (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar3 == 0)) goto LAB_023f33a0;
                      if (5 < *(uint *)(plVar2 + 3)) {
                        plVar2[9] = lVar5;
                        thunk_FUN_02134474(plVar2 + 9,lVar5);
                        uStack_44 = *(undefined4 *)(param_1 + 0x50);
                        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_44);
                        if ((lVar5 != 0) &&
                           (lVar3 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar3 == 0)) goto LAB_023f33a0;
                        puVar1 = PTR_DAT_04cb7768;
                        if (6 < *(uint *)(plVar2 + 3)) {
                          plVar2[10] = lVar5;
                          thunk_FUN_02134474(plVar2 + 10,lVar5);
                          System_String__Format_46d3570(*(undefined8 *)puVar1,plVar2,0);
                          return;
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
LAB_023f3398:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_023f339c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

