/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass17_0$$<BindHall>b__0
void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass17_0___BindHall_b__0 (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass17_0_o* __this, Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass17_0$$<BindHall>b__0
   void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass17_0___BindHall_b__0
   (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass17_0_o* __this,
   Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass17_0___BindHall_b__0_2242d44
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04cb38d8;
  if ((bRam0000000004f9bf19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb38d8);
    bRam0000000004f9bf19 = 1;
  }
  plVar2 = (long *)thunk_FUN_0216e7a0(param_2,*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar2;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(long *)puVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02342df4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0216b7a4(plVar2,lVar4,0);
LAB_02342df4:
                    /* WARNING: Could not recover jumptable at 0x02342e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2,uVar8,puVar3[1]);
  return;
}

