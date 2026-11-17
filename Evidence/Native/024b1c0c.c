/* IL2CPP: Dino.BusSand.View.GarageView$$Arch
System_Collections_Generic_List_Vector2__o* Dino_BusSand_View_GarageView__Arch (float w, float wall, float rise, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Arch
   System_Collections_Generic_List_Vector2__o* Dino_BusSand_View_GarageView__Arch (float w, float
   wall, float rise, int32_t seg, const MethodInfo* method); */

long Dino_BusSand_View_GarageView__Arch_23b1c0c
               (float param_1,float param_2,float param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fStack_68;
  float fStack_64;
  
  puVar3 = PTR_DAT_04cb7270;
  puVar2 = PTR_DAT_04caa1d8;
  if ((bRam0000000004f9c973 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    bRam0000000004f9c973 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar4,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04caa178;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)PTR_DAT_04caa178;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      fVar8 = param_1 * -0.5;
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 8;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(float *)(lVar5 + 0x20) = fVar8;
        *(undefined4 *)(lVar5 + 0x24) = 0;
      }
      else {
        System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                  (fVar8,0,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        fVar9 = param_1 * 0.5;
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 8;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(float *)(lVar5 + 0x20) = fVar9;
          *(undefined4 *)(lVar5 + 0x24) = 0;
        }
        else {
          System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                    (fVar9,0,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 8;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(float *)(lVar5 + 0x20) = fVar9;
            *(float *)(lVar5 + 0x24) = param_2;
          }
          else {
            System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                      (fVar9,param_2,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          fVar9 = _UNK_00e2082c;
          if (1 < param_4) {
            iVar7 = 1;
            do {
              sincosf(((float)iVar7 / (float)param_4) * fVar9,&fStack_64,&fStack_68);
              lVar5 = *(long *)(lVar4 + 0x10);
              lVar6 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 == 0) goto LAB_024b1ee8;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                lVar5 = lVar5 + (long)(int)uVar1 * 8;
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(float *)(lVar5 + 0x20) = fStack_68 * param_1 * 0.5;
                *(float *)(lVar5 + 0x24) = fStack_64 * param_3 + param_2;
              }
              else {
                System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                          (lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              iVar7 = iVar7 + 1;
            } while (param_4 != iVar7);
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              lVar5 = lVar5 + (long)(int)uVar1 * 8;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(float *)(lVar5 + 0x20) = fVar8;
              *(float *)(lVar5 + 0x24) = param_2;
            }
            else {
                    /* try { // try from 024b1eac to 025b1eb3 has its CatchHandler @ 024b2458 */
                    /* try { // try from 024b1eb4 to 025b2473 has its CatchHandler @ 024b1ac0 */
              System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                        (fVar8,param_2,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            return lVar4;
          }
        }
      }
    }
  }
LAB_024b1ee8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

